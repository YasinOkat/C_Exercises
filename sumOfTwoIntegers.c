#include <stdio.h>

double sum(double num1, double num2);

int main(){

    double num1;
    double num2;
    double result;

    printf("Enter first number: \n");
    scanf("%lf", &num1);
    printf("Enter second number: \n");
    scanf("%lf", &num2);

    result = sum(num1, num2);
    printf("%lf\n", result);
}

double sum(double num1, double num2){
    if(num1 == num2)
        return 3*(num1 + num2);
    else
        return num1 + num2;
}