#include <stdlib.h>
#include <stdio.h>
#include <pixman.h>

union C {
    uint32_t value;
    struct RGBA8888 {
        uint8_t a;
        uint8_t b;
        uint8_t g;
        uint8_t r;
    } rgba;
};

int main()
{
    // create target image full with r=0x20 g=0x20 b=0x80 a=0xFF
    size_t w = 100; // multiple of 4 for alignment
    size_t h = 100;
    C *target = (C*)malloc(w * h * sizeof(C));
    for(size_t i = 0; i < w * h; ++i)
        target[i].value = 0x202080FF;
    printf("in: r=%02X g=%02X b=%02X a=%02X\n", 
        target[0].rgba.r, target[0].rgba.g, target[0].rgba.b, target[0].rgba.a);

    // connect target to pixman image
    pixman_image_t *ptarget = pixman_image_create_bits(PIXMAN_r8g8b8a8, w, h, (uint32_t*)target, w * sizeof(uint32_t));

    // create fill
    pixman_color_t cfill;
    cfill.red   = uint16_t(0xFF) << 8;
    cfill.green = uint16_t(0xFF) << 8;
    cfill.blue  = uint16_t(0xFF) << 8;
    cfill.alpha = uint16_t(0xFF) << 8;
    pixman_image_t *pfill = pixman_image_create_solid_fill(&cfill);

    // create mask with a=0x80
    uint8_t *mask = (uint8_t*)malloc(w * h);
    for(size_t i = 0; i < w * h; ++i)
        mask[i] = 0x80;
    pixman_image_t *pmask = pixman_image_create_bits(PIXMAN_a8, w, h, (uint32_t*)mask, w);

    // do compositing
    pixman_image_composite(
                           PIXMAN_OP_OVER,
                           pfill, pmask, ptarget,
                           // src_x, src_y
                           0, 0,
                           // mask_x, mask_y
                           0, 0,
                           // dest_x, dest_y, width, height
                           0, 0, w, h);

    // display one pixel of target
    printf("out: r=%02X g=%02X b=%02X a=%02X\n", 
        target[0].rgba.r, target[0].rgba.g, target[0].rgba.b, target[0].rgba.a);
}
