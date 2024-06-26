#ifndef VIEW_H_INCLUDED
#define VIEW_H_INCLUDED

#include <stdint.h>
#include "view_types.h"
#include "model/model.h"
#include "gel/keypad/keypad.h"
#include "gel/pagemanager/page_manager.h"
#include "lvgl.h"

void view_init(model_t *model, void (*flush_cb)(struct _disp_drv_t *, const lv_area_t *, lv_color_t *),
               void (*rounder_cb)(struct _disp_drv_t *, lv_area_t *),
               void (*set_px_cb)(struct _disp_drv_t *, uint8_t *, lv_coord_t, lv_coord_t, lv_coord_t, lv_color_t,
                                 lv_opa_t),
               void (*reset_input)(void));

view_t             view_change_page_extra(model_t *model, const pman_page_t *page, void *extra);
view_t             view_change_page(model_t *model, const pman_page_t *page);
view_t             view_rebase_page(model_t *model, const pman_page_t *page);
int                view_get_next_msg(model_t *model, view_message_t *msg, view_event_t *eventcopy);
int                view_process_msg(view_page_command_t vmsg, model_t *model);
void               view_event(view_event_t event);
void               view_close_all(void *data);
void               view_destroy_all(void *arg, void *extra);
lv_task_t         *view_register_periodic_task(size_t period, lv_task_prio_t prio, uint32_t id);
const pman_page_t *view_main_page(model_t *pmodel);
const pman_page_t *view_choice_page(model_t *pmodel);
const pman_page_t *view_work_page(model_t *pmodel);


extern const pman_page_t page_main, page_main_lab, page_test_digout, page_test_level, page_splash, page_parmac,
    page_reset_ram, page_stats, page_datetime, page_set_datetime, page_programs, page_program_name, page_program_price,
    page_program_type, page_program_steps, page_parlav, page_choice, page_choice_lab, page_work, page_work_lab,
    page_communication_settings, page_info, page_test_temperature, page_contrast, page_removable_drive, page_test_digin,
    page_test_heating, page_test_rotation, page_test_proximity, page_test_coin, page_test_digital_coin, page_test_led,
    page_test_oblo, page_test_mems, page_test_liter_counter, page_machine_name;

#endif
