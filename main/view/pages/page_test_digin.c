#include <stdio.h>
#include "view/view.h"
#include "gel/pagemanager/page_manager.h"
#include "model/model.h"
#include "peripherals/keyboard.h"
#include "lvgl/lvgl.h"
#include "view/fonts/legacy_fonts.h"
#include "view/common.h"
#include "view/styles.h"
#include "view/intl/intl.h"
#include "esp_log.h"


#define NUM_NATIVE_INPUTS 13
#define NUM_EXP_INPUTS    4
#define NUM_INPUTS        (NUM_NATIVE_INPUTS + NUM_EXP_INPUTS)


struct page_data {
    lv_obj_t *leds[NUM_INPUTS];

    lv_task_t *timer;
};


static const char *TAG = "PageTestDigin";


static void update_page(model_t *pmodel, struct page_data *pdata) {
    for (size_t i = 0; i < NUM_NATIVE_INPUTS; i++) {
        if (pmodel->test.inputs & (1 << i)) {
            lv_led_off(pdata->leds[i]);
        } else {
            lv_led_on(pdata->leds[i]);
        }
    }
    for (size_t i = 0; i < NUM_EXP_INPUTS; i++) {
        if (pmodel->test.inputs_exp & (1 << i)) {
            lv_led_off(pdata->leds[i + NUM_NATIVE_INPUTS]);
        } else {
            lv_led_on(pdata->leds[i + NUM_NATIVE_INPUTS]);
        }
    }
}


static void *create_page(model_t *pmodel, void *extra) {
    (void)TAG;
    (void)pmodel;
    (void)extra;
    struct page_data *pdata = malloc(sizeof(struct page_data));
    pdata->timer            = view_register_periodic_task(500UL, LV_TASK_PRIO_OFF, 0);
    return pdata;
}


static void open_page(model_t *pmodel, void *args) {
    struct page_data *pdata = args;

    lv_task_set_prio(pdata->timer, LV_TASK_PRIO_MID);

    view_common_title(lv_scr_act(), view_intl_get_string(pmodel, STRINGS_TEST_INGRESSI));

    for (size_t i = 0; i < NUM_INPUTS; i++) {
        uint16_t y = i / 6;

        lv_obj_t *led = lv_led_create(lv_scr_act(), NULL);
        lv_obj_set_size(led, 10, 6);
        lv_obj_align(led, NULL, LV_ALIGN_IN_TOP_LEFT, 8 + (i % 6) * 20, 24 + y * 16);
        pdata->leds[i] = led;

        lv_obj_t *lbl = lv_label_create(lv_scr_act(), NULL);
        lv_obj_set_style(lbl, &style_label_6x8);
        if (i >= NUM_NATIVE_INPUTS) {
            lv_label_set_text_fmt(lbl, "E%i", i + 1 - NUM_NATIVE_INPUTS);
        } else {
            lv_label_set_text_fmt(lbl, "%02i", i + 1);
        }
        lv_obj_align(lbl, led, LV_ALIGN_OUT_TOP_MID, 0, 0);
    }

    update_page(pmodel, pdata);
}


static view_message_t process_page_event(model_t *pmodel, void *args, pman_event_t event) {
    view_message_t    msg   = VIEW_EMPTY_MSG;
    struct page_data *pdata = args;

    switch (event.code) {
        case VIEW_EVENT_CODE_MODEL_UPDATE:
            update_page(pmodel, pdata);
            break;

        case VIEW_EVENT_CODE_OPEN:
            msg.cmsg.code = VIEW_CONTROLLER_COMMAND_CODE_TEST;
            msg.cmsg.test = 1;
            break;

        case VIEW_EVENT_CODE_KEYPAD: {
            if (event.key_event.event == KEY_CLICK) {
                switch (event.key_event.code) {
                    case BUTTON_SINISTRA: {
                        msg.vmsg.code = VIEW_PAGE_COMMAND_CODE_SWAP_PAGE;
                        msg.vmsg.page = &page_test_mems;
                        break;
                    }

                    case BUTTON_DESTRA: {
                        msg.vmsg.code = VIEW_PAGE_COMMAND_CODE_SWAP_PAGE;
                        msg.vmsg.page = &page_test_digout;
                        break;
                    }

                    case BUTTON_MENO: {
                        break;
                    }

                    case BUTTON_PIU: {
                        break;
                    }

                    case BUTTON_STOP: {
                        msg.vmsg.code = VIEW_PAGE_COMMAND_CODE_BACK;
                        msg.cmsg.code = VIEW_CONTROLLER_COMMAND_CODE_TEST;
                        msg.cmsg.test = 0;
                        break;
                    }

                    case BUTTON_LINGUA: {
                        break;
                    }

                    default:
                        break;
                }
            }
            break;
        }

        case VIEW_EVENT_CODE_TIMER:
            msg.cmsg.code = VIEW_CONTROLLER_COMMAND_CODE_TEST_REFRESH;
            break;

        default:
            break;
    }

    return msg;
}


static void close_page(void *arg) {
    struct page_data *pdata = arg;
    lv_task_set_prio(pdata->timer, LV_TASK_PRIO_OFF);
    lv_obj_clean(lv_scr_act());
}


static void destroy_page(void *arg, void *extra) {
    struct page_data *pdata = arg;
    lv_task_del(pdata->timer);
    free(pdata);
    free(extra);
}


const pman_page_t page_test_digin = {
    .create        = create_page,
    .open          = open_page,
    .process_event = process_page_event,
    .close         = close_page,
    .destroy       = destroy_page,
};