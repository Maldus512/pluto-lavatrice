import kconfiglib
import os
import multiprocessing
import tools.meta.csv2carray as csv2carray
from pathlib import Path


def PhonyTargets(
    target,
    action,
    depends,
    env=None,
):
    # Creates a Phony target
    if not env:
        env = DefaultEnvironment()
    t = env.Alias(target, depends, action)
    env.AlwaysBuild(t)


def getKconfig(kconfig):
    if os.path.isfile('sdkconfig'):
        config = kconfiglib.Kconfig(kconfig)
        config.load_config('sdkconfig')
    else:
        print('Not configured!')
        exit(1)
    return config


def generate_sdkconfig_header(target, source, env):
    content = """
#ifndef SDKCONFIG_H_INCLUDED
#define SDKCONFIG_H_INCLUDED
// Automatically generated file. Do not edit.

    """
    for config in list(
            map(lambda x: getKconfig(str(x)),
                [kconf for kconf in source if 'Kconfig' in str(kconf)])):
        config.load_config('sdkconfig')

        for (key, sym) in [(x, config.syms[x]) for x in config.syms.keys()]:
            if sym.type == kconfiglib.BOOL and sym.str_value == 'y':
                content += "#define CONFIG_{} 1\n".format(key)
            elif sym.type == kconfiglib.INT:
                content += "#define CONFIG_{} {}\n".format(key, sym.str_value)
            elif sym.type == kconfiglib.STRING:
                if key in ['LV_USER_DATA_FREE', 'LV_MEM_CUSTOM_FREE', 'LV_MEM_CUSTOM_ALLOC', 'LV_TICK_CUSTOM_SYS_TIME_EXPR']:
                    value = sym.str_value.replace('"', '')
                else:
                    value = f'"{sym.str_value}"'
                content += '#define CONFIG_{} {}\n'.format(key, value)

    content += "#endif"

    with open(str(target[0]), "w") as f:
        f.write(content)


MINGW = 'mingw' in COMMAND_LINE_TARGETS
PROGRAM = "simulated.exe" if MINGW else "simulated"
MAIN = "main"
SIMULATOR = "simulator"
COMPONENTS = "components"
ASSETS = "assets"
FREERTOS = f'{SIMULATOR}/freertos-simulator'
CJSON = f'{SIMULATOR}/cJSON'
B64 = f'{SIMULATOR}/b64'
DRIVERS = f"{SIMULATOR}"
LVGL = f"{COMPONENTS}/lvgl"


PARMAC_DESCRIPTIONS = f"{MAIN}/model/descriptions"
STRING_TRANSLATIONS = f"{MAIN}/view/intl"

TRANSLATIONS = [
    {
        "res": [f"{PARMAC_DESCRIPTIONS}/AUTOGEN_FILE_pars.c", f"{PARMAC_DESCRIPTIONS}/AUTOGEN_FILE_pars.h"],
        "input": f"{ASSETS}/translations/pars",
        "output": PARMAC_DESCRIPTIONS,
    },
    {
        "res": [f"{STRING_TRANSLATIONS}/AUTOGEN_FILE_strings.c", f"{STRING_TRANSLATIONS}/AUTOGEN_FILE_strings.h"],
        "input": f"{ASSETS}/translations/strings",
        "output": STRING_TRANSLATIONS
    },
]


CFLAGS = [
    "-Wall",
    "-Wextra",
    "-Wno-unused-function",
    "-g",
    "-O0",
    "-DLV_CONF_INCLUDE_SIMPLE",
    "-DPC_SIMULATOR",
    '-DprojCOVERAGE_TEST=1',
    "-Wno-unused-parameter",
    "-DGEL_PAGEMANAGER_CONFIGURATION_HEADER=\"\\\"view/view_types.h\\\"\"",
]
LDLIBS = ["-lmingw32", "-lSDL2main",
          "-lSDL2"] if MINGW else ["-lSDL2"] + ['-lpthread']

CPPPATH = [
    COMPONENTS, f'{SIMULATOR}/port', f'#{MAIN}',
    f"#{MAIN}/config", f"#{SIMULATOR}", B64, CJSON, DRIVERS, f"#{LVGL}", f"#{LVGL}/lvgl"
]


def main():
    num_cpu = multiprocessing.cpu_count()
    SetOption('num_jobs', num_cpu)
    print("Running with -j {}".format(GetOption('num_jobs')))

    env_options = {
        "ENV": os.environ,
        "CC": ARGUMENTS.get('cc', 'gcc'),
        "ENV": os.environ,
        "CPPPATH": CPPPATH,
        'CPPDEFINES': [],
        "CCFLAGS": CFLAGS,
        "LIBS": LDLIBS,
    }

    env = Environment(**env_options)
    env.Tool('compilation_db')

    translations = []
    for translation in TRANSLATIONS:
        def operation(t):
            return lambda target, source, env: csv2carray.main(t["input"], t["output"])

        env.Command(
            translation["res"], Glob(f"{translation['input']}/*.csv"), operation(translation))
        translations += translation["res"]

    freertos_env = env
    (freertos, include) = SConscript(
        f'{FREERTOS}/SConscript', exports=['freertos_env'])
    env['CPPPATH'] += [include]

    gel_env = env
    gel_selected = ["keypad", "collections", "pagemanager"]
    (gel, include) = SConscript(
        f'{COMPONENTS}/generic_embedded_libs/SConscript', exports=['gel_env', 'gel_selected'])
    env['CPPPATH'] += [include]

    sdkconfig = env.Command(
        f"{SIMULATOR}/sdkconfig.h",
        [str(filename) for filename in Path(
            'components').rglob('Kconfig')] + ['sdkconfig'],
        generate_sdkconfig_header)

    sources = Glob(f'{SIMULATOR}/*.c')
    sources += Glob(f'{SIMULATOR}/port/*.c')
    sources += [File(filename) for filename in Path('main/model').rglob('*.c')]
    sources += [File(filename)
                for filename in Path('main/config').rglob('*.c')]
    sources += [File(filename) for filename in Path('main/view').rglob('*.c')]
    sources += [File(filename)
                for filename in Path('main/controller').rglob('*.c')]
    sources += [File(filename)
                for filename in Path(f"{DRIVERS}/display").rglob('*.c')]
    sources += [File(filename)
                for filename in Path(f"{LVGL}/lvgl").rglob('*.c')]
    sources += [File(f'{CJSON}/cJSON.c')]
    sources += [File(f'{B64}/encode.c'),
                File(f'{B64}/decode.c'), File(f'{B64}/buffer.c')]

    prog = env.Program(PROGRAM, sources + freertos + gel)
    PhonyTargets('run', './simulated', prog, env)
    env.Alias('mingw', prog)
    env.CompilationDatabase('build/compile_commands.json')
    env.Alias("intl", translations)


main()
