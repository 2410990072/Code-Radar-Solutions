#include <stdio.h>

int main() {
    double num1, num2, result;
    char operator;

    // Get user input
    printf("Enter first number: ");
    scanf("%lf", &num1);

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);  // The space before %c is used to skip any whitespace character

    printf("Enter second number: ");
    scanf("%lf", &num2);

    // Perform the operation based on the operator
    if (operator == '+') {
        result = num1 + num2;
        printf("Result: %.2lf\n", result);
    }
    else if (operator == '-') {
        result = num1 - num2;
        printf("Result: %.2lf\n", result);
    }
    else if (operator == '*') {
        result = num1 * num2;
        printf("Result: %.2lf\n", result);
    }
    else if (operator == '/') {
        if (num2 != 0) {  // Check to prevent division by zero
            result = num1 / num2;
            printf("Result: %.2lf\n", result);
        } else {
            printf("error\n");
        }
    } 
   

    return 0;
}
