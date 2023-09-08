#include <stdio.h>

void inputNum1(double *num1);
void inputOp(char *op);
void inputNum2(double *num2);
double calc(double num1, double num2, char op);

double main() {
    double num1, num2;
    char op;
    double ans;

    inputNum1(&num1);
    inputOp(&op);
    inputNum2(&num2);
    
    ans = calc(num1, num2, op);

    printf("Result: %lf\n", ans);

    return 0;
}