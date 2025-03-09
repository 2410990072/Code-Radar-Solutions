#include <stdio.h>

int main() {
    double num1, num2;
    char operator;

    // Input first number
    printf("Enter first number: ");
    scanf("%lf", &num1);

    // Input operator
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator);  // space before %c to consume any leftover newline character

    // Input second number
    printf("Enter second number: ");
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
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Error: Invalid operator!\n");
            break;
    }

    return 0;
}

