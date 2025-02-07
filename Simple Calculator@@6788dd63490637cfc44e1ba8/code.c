#include <stdio.h>

int main() {
    int a,b;
    char oper;
    printf("");
    scanf("%c",&oper);
    printf("");
    scanf("%d %d",&a,&b);
    if(operator=='+')
    printf("%.2f+%.2f=%.2f\n",a,b,a+b);
    else if(operator=='-')
    printf("%.2f-%.2f=%.2f\n",a,b,a-b);
    else if(operator=='*')
    printf("%.2f*%.2f=%.2f\n",a,b,a*b);
    else if(operator=='/')
    printf("%.2f/%.2f=%.2f\n",a,b,a/b);

    return 0;
}