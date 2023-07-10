#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool check(int array[], int length);

int main(){

    int numbers[] = {15, 20, 35, 50, 55, 57};

    int length = sizeof(numbers) / sizeof(numbers[0]);

    int result = check(numbers, length);


    printf("%d\n",result);

    return 0;
}

bool check(int array[], int length){

    for (int i = 0; i < length - 1; i++){
        if (array[i + 1] < array[i]){
            return false;
        }
    }

    return true;
}