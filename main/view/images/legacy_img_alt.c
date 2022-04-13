
#include "legacy.h"

static uint8_t const bitmap[] = {
0x00, 0x00,  /*  ........  *//*  ........  */
0x07, 0xE0,  /*  .....%%%  *//*  %%%.....  */
0x08, 0x10,  /*  ....%...  *//*  ...%....  */
0x10, 0x08,  /*  ...%....  *//*  ....%...  */
0x20, 0x04,  /*  ..%.....  *//*  .....%..  */
0x40, 0x02,  /*  .%......  *//*  ......%.  */
0x49, 0x3A,  /*  .%..%..%  *//*  ..%%%.%.  */
0x55, 0x12,  /*  .%.%.%.%  *//*  ...%..%.  */
0x5D, 0x12,  /*  .%.%%%.%  *//*  ...%..%.  */
0x55, 0xD2,  /*  .%.%.%.%  *//*  %%.%..%.  */
0x40, 0x02,  /*  .%......  *//*  ......%.  */
0x20, 0x04,  /*  ..%.....  *//*  .....%..  */
0x10, 0x08,  /*  ...%....  *//*  ....%...  */
0x08, 0x10,  /*  ....%...  *//*  ...%....  */
0x07, 0xE0,  /*  .....%%%  *//*  %%%.....  */
0x00, 0x00,  /*  ........  *//*  ........  */
};


const GSYMBOL legacy_img_alt = {
    .sh   = {1, 16, 16},
    .data = (uint8_t *)bitmap,
};