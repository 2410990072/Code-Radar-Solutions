#include <stdio.h>

int main() {
    float a,b;
    char oper;
    printf("");
    scanf("%c",&oper);
    printf("");
    scanf("%f %f",&a,&b);
    if(operator=='+')
    printf("%.2f+%.2f=%.2f\n",a,b,a+b);
    else if(operator=='-')
    printf("%.2f-%.2f=%.2f\n",a,b,a-b);
    else if(operator=='*')
    printf("%.2f*%.2f=%.2f\n",a,b,a*b);
    else if(operator=='/')
    printf("%.2f/%.2f=%.2f\n",a,b,a/b);
    else
    printf("error");

    return 0;
}