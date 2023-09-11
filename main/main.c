/**
 * @file    main.c
 * @author  Mathias Sandvold
 * @date    2023-09-08 (date of creation)
 * @updated 2023-09-11 (date of last update)
 * @version v1.0
 * @ingroup MAIN
 * @prefix  Main
 *
 * @brief   Main file.
 *
 */

/*========== Includes =======================================================*/

#include <stdio.h>

/*========== Function Implementations ================================*/

void inputNum1(double *num1);
void inputOp(char *op);
void inputNum2(double *num2);
double calc(double num1, double num2, char op);

int main() {
    double num1, num2;
    char op;
    double ans;

    /* 
    *   Call the input functions to get user input
     */
    inputNum1(&num1);
    inputOp(&op);
    inputNum2(&num2);
    
    /* 
    *   Call the calculation function and store the result in 'ans'
     */
    ans = calc(num1, num2, op);

    /* 
    *   Print the result
     */
    printf("Result: %lf\n", ans);

    return 0;
}