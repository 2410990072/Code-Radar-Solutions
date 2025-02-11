#include <stdio.h>

int main() {
    int a,i;
    scanf("%d",&a);
    if(n<2){ printf("Not Prime"); return 0;}
    for(i=2;i*i<=a;i++){
        if(a%i==0){ printf("Not Prime"); return 0;}}
    printf("Prime");
    return 0;
}

