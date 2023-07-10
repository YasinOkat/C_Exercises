#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool check(int array[]);

int main(){

    int numbers[] = {15, 15, 13, 20, 50};

    int result;

    result = check(numbers);
    printf("%d\n", result);
    
    return 0;
}

bool check(int array[]){

    for (int i = 0; i < (sizeof(array) / sizeof(array[0]) - 1); i++){
        if (array[i] == 15 && array[i + 1] == 15){
            return true;
        }
    }

    return false;
}