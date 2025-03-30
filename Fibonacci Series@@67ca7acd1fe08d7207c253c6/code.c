#include<stdio.h>
void fibonacciseries(int n);
int main(){
    int n;
    scanf("%d\n",&n);
    if(n<=0){
        printf("Invalid input\n");
    }
    fibonacciseries(3);
    for(int i=2;i<n;i++){
        fib[i]=fib[i-1]+fib[i-2];
        printf("%d\n",fib[i]);
    }
    printf("\n");

    return 0;
}
void fibonacciseries(int n){
    printf("%d",fibonacciseries);
}

