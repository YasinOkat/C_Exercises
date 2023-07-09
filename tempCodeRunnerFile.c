#include <stdio.h>
#include <math.h>

int commonDivisor(unsigned int num1, unsigned int num2);
float calculateAbsolute(float num);

int main(){

    int result;
    float result2;

    result = commonDivisor(78, 24);
    result2 = calculateAbsolute(-3.9);

    printf("\n%d\n", result);
    printf("%lf\n", result2);
}

int commonDivisor(unsigned int num1, unsigned int num2){
    int gcd;

    for(int i = 1; i <= num1 && i <= num2; i++){
        if(num1 % i == 0 && num2 % i ==0){
            gcd = i;
        }
    }
    return gcd;
}

float calculateAbsolute(float num){
    return sqrt(num * num);
}
