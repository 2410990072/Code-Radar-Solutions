#include <stdio.h>

int main() {
    float a,b;
    char oper;
    scanf("%c",&oper);
    scanf("%f %f",&a,&b);
    if(oper=='+')
    printf("%lf + %lf=%.2lf\n",a,b,a+b);
    else if(oper=='-')
    printf("%lf - %lf=%.2lf\n",a,b,a-b);
    else if(oper=='*')
    printf("%lf * %lf=%.2lf\n",a,b,a*b);
    else if(oper=='/')
    printf("%lf / %lf=%.2lf\n",a,b,a/b);
    else
    printf("error");

    return 0;
}