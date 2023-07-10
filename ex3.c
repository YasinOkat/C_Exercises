#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int numbers[5];
    int total = 0;
    int i;

    for(i = 0; i < 5; i++){
        printf("Enter a number: \n");
        scanf("%d", &numbers[i]);        
    }

    for(i = 0; i < 5; i++){
        if(numbers[i] % 2 != 0){
            total += numbers[i];
        }
    }

    printf("%d\n", total);
}

