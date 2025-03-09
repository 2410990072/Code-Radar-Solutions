#include <stdio.h>

int main() {
    double num1, num2;
    char operator;

    // Input first number
    printf("");
    scanf("%lf", &num1);

    // Input operator
    printf("");
    scanf(" %c", &operator);  // space before %c to consume any leftover newline character

    // Input second number
    printf("");
    scanf("%lf", &num2);

    // Perform the operation based on the operator
    switch (operator) {
        case '+':
            printf("Result: %.2lf\n", num1 + num2);
            break;
        case '-':
            printf("Result: %.2lf\n", num1 - num2);
            break;
        case '*':
            printf("Result: %.2lf\n", num1 * num2);
            break;
        case '/':
            // Check for division by zero
            if (num2 != 0) {
                printf("Result: %.2lf\n", num1 / num2);
            } else {
                printf("Error");
            }
            break;
        default:
            printf("error");
            break;
    }

    return 0;
}

