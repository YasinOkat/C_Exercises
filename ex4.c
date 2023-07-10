#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int numbers[5];
    int positive = 0;
    int negative = 0;
    int i;

    for(i = 0; i < 5; i++){
        printf("Enter a number: \n");
        scanf("%d", &numbers[i]);        
    }

    for(i = 0; i < 5; i++){
        if(numbers[i] > 0){
            positive++;
        }
        else{
            negative++;
        }
    }

    printf("The negative: %d\n", negative);
    printf("The positive: %d\n", positive);


}

