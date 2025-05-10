#include <math.h>
#include "header.h"

double cone_volume(struct zadacha k) {
    return 0.3333 * 3.14 * k.r * k.r * k.h;
}

double cone_surface_area(struct zadacha k) {
    return 3.14 * k.r * sqrt(pow(k.r, 2) + pow(k.h, 2));
}