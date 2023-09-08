#include "functions.h"
#include <stdio.h>

void inputNum1(double *num1) {
    printf("Enter first number: ");
    scanf("%lf", num1);
}

void inputOp(char *op) {
    printf("Enter operator: ");
    scanf(" %c", op);
}

void inputNum2(double *num2) {
    printf("Enter second number: ");
    scanf("%lf", num2);
}

double calc(double num1, double num2, char op) {
    double ans = 0;
    if (op == '+') {
        ans = num1 + num2;
    } else if (op == '-') {
        ans = num1 - num2;
    } else if (op == '*') {
        ans = num1 * num2;
    } else if (op == '/') {
        if (num2 != 0) {
            ans = num1 / num2;
        } else {
            printf("Division by zero is not allowed.\n");
        }
    } else {
        printf("Invalid operator.\n");
    }
    return ans;
}
