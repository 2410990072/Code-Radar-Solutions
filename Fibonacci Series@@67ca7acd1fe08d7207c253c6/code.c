#include<stdio.h>
void fibonacciSeries(int n);
int main(){
    int n;
    scanf("%d",&n);
    if(n<=0){
        printf("Invalid input\n");
        return 0;
    }
    fibonacciSeries(n);
    return 0;
}
void fibonacciSeries(int n){
    int a=0,b=1,next;
    // Special case for n = 1
    if (n >= 1) printf("%d\n", a);

    // Special case for n = 2
    if (n >= 2) printf("%d\n", b);

    // Generate and print Fibonacci numbers starting from the 3rd number
    for (int i = 3; i <= n; i++) {
        next = a + b;
        printf("%d\n", next);
        a = b; // Update a to the previous Fibonacci number
        b = next;
}
}