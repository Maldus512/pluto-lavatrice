#ifndef VIEW_COMMON_H_INCLUDED
#define VIEW_COMMON_H_INCLUDED

#include "view.h"
#include "peripherals/keyboard.h"


#define VIEW_PASSWORD_TIMEOUT      4000UL
#define VIEW_PASSWORD_MAX_SIZE     7
#define VIEW_PASSWORD_MINUS        ((button_t[]){BUTTON_MENO, BUTTON_MENO})
#define VIEW_PASSWORD_SET_DATETIME ((button_t[]){BUTTON_MENU, BUTTON_MENU})
#define VIEW_PASSWORD_PLUS         ((button_t[]){BUTTON_PIU, BUTTON_PIU})
#define VIEW_PASSWORD_RIGHT        ((button_t[]){BUTTON_DESTRA, BUTTON_DESTRA})
#define VIEW_PASSWORD_LEFT         ((button_t[]){BUTTON_SINISTRA, BUTTON_SINISTRA})
#define VIEW_PASSWORD_TIEPIDO      ((button_t[]){BUTTON_PIU, BUTTON_PIU})
#define VIEW_PASSWORD_RESET        ((button_t[]){BUTTON_PIU, BUTTON_DESTRA, BUTTON_SINISTRA, BUTTON_MENO})
#define VIEW_SHORT_PASSWORD_LEN    2
#define VIEW_LONG_PASSWORD_LEN     4

typedef struct {
    button_t      password[VIEW_PASSWORD_MAX_SIZE];
    size_t        index;
    unsigned long last_timestamp;
} view_common_password_t;


lv_obj_t   *view_common_title(lv_obj_t *root, const char *str);
void        view_common_password_add_key(view_common_password_t *inserted, button_t new, unsigned long timestamp);
int         view_common_check_password(view_common_password_t *inserted, button_t *password, size_t length,
                                       unsigned long timestamp);
void        view_common_password_reset(view_common_password_t *password, unsigned long timestamp);
lv_task_t  *view_common_register_timer(unsigned long period);
int         view_common_check_password_started(view_common_password_t *inserted);
void       *view_common_malloc_page_data(size_t size);
lv_obj_t   *view_common_horizontal_line(void);
lv_obj_t   *view_common_line(lv_point_t *points, size_t len);
const char *view_common_step2str(model_t *pmodel, uint16_t step);

#endif