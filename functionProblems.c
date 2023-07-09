#include <stdio.h>
#include <math.h>

int commonDivisor(unsigned int num1, unsigned int num2);
float calculateAbsolute(float num);
float squareRoot(float num);

int main(){

    int result;
    float result2;
    float result3;

    result = commonDivisor(78, 24);
    result2 = calculateAbsolute(-3.5);
    result3 = squareRoot(25.0);

    printf("\n%d\n", result);
    printf("%lf\n", result2);
    printf("%lf\n", result3);
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
    if(num < 0){
        return -num;
    }
    else{
        return num;
    }
}

float squareRoot(float num){

    const float epsilon = .00001;
    float guess = 1.0;

    if(num < 0){
        printf("Enter a positive value\n");
        return -1.0;
    }
    else{
        while(calculateAbsolute(guess * guess - num) >= epsilon){
            guess = (num / guess + guess) / 2.0;
        } 
    }

    return guess;
}
