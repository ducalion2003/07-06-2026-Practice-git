#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;

    // Prompt the user to enter an arithmetic operator
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator); // Note the space before %c to catch any stray newline character

    // Prompt the user to input two numeric operands
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    // Evaluate the matching mathematical operation
    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("Result: %.2lf + %.2lf = %.2lf\n", num1, num2, result);
            break;

        case '-':
            result = num1 - num2;
            printf("Result: %.2lf - %.2lf = %.2lf\n", num1, num2, result);
            break;

        case '*':
            result = num1 * num2;
            printf("Result: %.2lf * %.2lf = %.2lf\n", num1, num2, result);
            break;

        case '/':
            // Error validation: prevent dividing a number by zero
            if (num2 != 0.0) {
                result = num1 / num2;
                printf("Result: %.2lf / %.2lf = %.2lf\n", num1, num2, result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;

        // Default block executes if the user types an invalid operator
        default:
            printf("Error: '%c' is an invalid operator.\n", operator);
            break;
    }

    return 0;
}
