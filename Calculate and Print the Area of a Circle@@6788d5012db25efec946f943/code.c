#include <stdio.h>

char* welcome() {
    float radius;
    printf("");
    scanf("%f",&radius);
    printf("Area: %.2f\n",3.14*pow(radius,2));
    return 0;
}