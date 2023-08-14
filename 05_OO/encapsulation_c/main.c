#include "point.h"
#include <stdio.h>

int main(void){
    struct Point* p1 = makePoint(2,2);
    struct Point* p2 = makePoint(1,1);

    double d;
    d = distance(p1, p2);
    printf("distance: %f\n", d);

    return 0;
}