
#include "legacy.h"

static uint8_t const bitmap[] = {
0x00, 0x00, /*  ........  *//*  ........  */
0x00, 0x00, /*  ........  *//*  ........  */
0x0C, 0x60, /*  ....%%..  *//*  .%%.....  */
0x0E, 0x70, /*  ....%%%.  *//*  .%%%....  */
0x07, 0x38, /*  .....%%%  *//*  ..%%%...  */
0x03, 0x9C, /*  ......%%  *//*  %..%%%..  */
0x01, 0xCE, /*  .......%  *//*  %%..%%%.  */
0x00, 0xE7, /*  ........  *//*  %%%..%%%  */
0x00, 0xE7, /*  ........  *//*  %%%..%%%  */
0x01, 0xCE, /*  .......%  *//*  %%..%%%.  */
0x03, 0x9C, /*  ......%%  *//*  %..%%%..  */
0x07, 0x38, /*  .....%%%  *//*  ..%%%...  */
0x0E, 0x70, /*  ....%%%.  *//*  .%%%....  */
0x0C, 0x60, /*  ....%%..  *//*  .%%.....  */
0x00, 0x00, /*  ........  *//*  ........  */
0x00, 0x00, /*  ........  *//*  ........  */
};


const GSYMBOL legacy_img_right = {
    .sh   = {1, 16, 16},
    .data = (uint8_t *)bitmap,
};