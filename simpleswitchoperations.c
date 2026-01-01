
#include <stdio.h>

int main() {
    
    char operation;
    double num1, num2, result;

    printf("--- C Calculator ---\n");
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operation);

    printf("Enter two operands: ");
    scanf("%lf %lf", &num1, &num2);

    switch (operation) {
        case '+':
            result = num1 + num2;
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, result);
            break;

        case '-':
            result = num1 - num2;
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, result);
            break;

        case '*':
            result = num1 * num2;
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, result);
            break;

        case '/':
            // Checking for division by zero
            if (num2 != 0) {
                result = num1 / num2;
                printf("%.2lf / %.2lf = %.2lf\n", num1, num2, result);
            } else {
                printf("Error! Division by zero is undefined.\n");
            }
            break;

        default:
            printf("Error! Operator is not correct.\n");
    }

    return 0;
}
