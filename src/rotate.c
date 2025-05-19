#include <math.h>
#include "tipsy.h"

void rotate_point(float cx, float cy, float x, float y, float angle_deg, int *rx, int *ry) {
    float angle = angle_deg * M_PI / 180.0;
    float s = sinf(angle);
    float c = cosf(angle);

    x -= cx;
    y -= cy;

    float xnew = x * c - y * s;
    float ynew = x * s + y * c;

    x = xnew + cx;
    y = ynew + cy;

    *rx = (int)(x + 0.5);
    *ry = (int)(y + 0.5);
}