#include<stdio.h>

void fibonacciseries(int n);

int main() {
    int n;
    scanf("%d", &n); // Get the input
    if (n <= 0) {
        printf("Invalid input\n");
        return 0; // Exit if the input is invalid
    }
    fibonacciseries(n); // Print the Fibonacci series
    return 0;
}

void fibonacciseries(int n) {
    // Declare an array to store Fibonacci numbers
    int fib[n]; 

    // Initializing the first two numbers of the Fibonacci sequence
    fib[0] = 0;
    fib[1] = 1;

    // Print the first two Fibonacci numbers
    if (n >= 1) printf("%d\n", fib[0]);
    if (n >= 2) printf("%d\n", fib[1]);

    // Generate and print the remaining Fibonacci numbers
    for (int i = 2; i < n; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
        printf("%d\n", fib[i]);
    }
}
