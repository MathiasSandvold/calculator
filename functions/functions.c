/**
 * @file    functions.c
 * @author  Mathias Sandvold
 * @date    2023-09-08 (date of creation)
 * @updated 2023-09-11 (date of last update)
 * @version v1.0
 * @ingroup FUNCTIONS
 * @prefix  Functions
 *
 * @brief   Functions.
 *
 */

/*========== Includes =======================================================*/

#include "functions.h"
#include <stdio.h>

/*========== Macros and Definitions =========================================*/

/*========== Function Implementations ================================*/

/**
 * @brief   Take input from user for first number.
 * @param   num1 pointer to first number.
 */
void inputNum1(double *num1) {
    printf("Enter first number: ");
    scanf("%lf", num1);
}

/**
 * @brief   Take input from user for operator.
 * @param   op pointer to operator.
 */
void inputOp(char *op) {
    printf("Enter operator: ");
    scanf(" %c", op);
}

/**
 * @brief   Take input from user for second number.
 * @param   num2 pointer to first number.
 */
void inputNum2(double *num2) {
    printf("Enter second number: ");
    scanf("%lf", num2);
}

/* 
*   Function to perform the calculation based on operator
 */
/**
 * @brief   Calculate answer.
 * @param   num1 pointer to first number.
 * @param   num2 pointer to second number.
 * @param   op pointer to first number.
 * @return  answer.
 */
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
