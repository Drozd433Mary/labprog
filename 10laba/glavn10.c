#include <stdio.h>
#include "header.h"
int main() {
    int n = 5;
    struct zadacha k[n]; // {{r = 1, h = 2},{1, 2},{1, 2},{1, 2},{1, 2}}
    double V;
    double S;

    for (int i = 0; i < n; i++) {
        scanf("%d %d", &k[i].r, &k[i].h);
    }

    for (int i = 0; i < n; i++) {
        V = cone_volume(k[i]);
        S = cone_surface_area(k[i]);
        printf("%lf|%lf\n", V, S);
    }
}
