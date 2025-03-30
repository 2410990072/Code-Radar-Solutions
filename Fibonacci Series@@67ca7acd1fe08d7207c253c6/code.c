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
    // Variables to store the previous two Fibonacci numbers
    int a = 0, b = 1, next;

    // Special case for n = 1
    if (n >= 1) printf("%d\n", a);

    // Special case for n = 2
    if (n >= 2) printf("%d\n", b);

    // Generate the remaining Fibonacci numbers
    for (int i = 3; i <= n; i++) {
        next = a + b;
        printf("%d\n", next);
        a = b; // Update a to be the previous number
        b = next; // Update b to be the current number
    }
}
