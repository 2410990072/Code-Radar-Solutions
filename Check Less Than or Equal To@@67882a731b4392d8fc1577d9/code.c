#include <stdio.h>

char* welcome() {
    int a,b;
    scanf("%d %d ",&a,&b);
    if(a<=b)
    printf("True");
    else
    printf("False");
    return 0;
}