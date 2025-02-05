#include <stdio.h>

char* welcome() {
    int radius;
    printf("");
    scanf("%d",&radius);
    printf("Area: %d\n",3.14*pow(radius,2));
    return 0;
}