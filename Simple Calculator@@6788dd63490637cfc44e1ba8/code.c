#include <stdio.h>

int main() {
    double num1, num2, result;
    char operator;
    scanf("%lf", &num1);
    scanf(" %c", &operator); 
    scanf("%lf", &num2);
    if (operator == '+') {
        result = num1 + num2;
        printf("%.2lf\n", result);
    }
    else if (operator == '-') {
        result = num1 - num2;
        printf("%.2lf\n", result);
    }
    else if (operator == '*') {
        result = num1 * num2;
        printf("%.2lf\n", result);
    }
    else if (operator == '/') {
        if (num2 != 0) { 
            result = num1 / num2;
            printf("%.2lf\n", result);
        } 
        
    } 
    else{
            printf("error\n");
        }
   

    return 0;
}
