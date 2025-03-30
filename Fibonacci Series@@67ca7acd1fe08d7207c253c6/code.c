#include <stdio.h>

void generateFibonacci(int n);

int main() {
    int n;
    scanf("%d", &n); // Get the number of terms
    if (n <= 0) {
        printf("Invalid input\n");
        return 0; // Exit if the input is invalid
    }
    generateFibonacci(n); // Generate and print the Fibonacci series
    return 0;
}

void generateFibonacci(int n) {
    // Variables to store the first two Fibonacci numbers
    int a = 0, b = 1, next;

    // If n is at least 1, print the first Fibonacci number
    if (n >= 1) {
        printf("%d ", a);
    }
    
    // If n is at least 2, print the second Fibonacci number
    if (n >= 2) {
        printf("%d ", b);
    }

    // Generate and print the Fibonacci series for subsequent numbers
    for (int i = 3; i <= n; i++) {
        next = a + b;
        printf("%d ", next);
        a = b; // Update 'a' to the previous Fibonacci number
        b = next; // Update 'b' to the current Fibonacci number
    }

    printf("\n"); // To print a newline at the end
}


