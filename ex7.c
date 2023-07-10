#include <stdio.h>
#include <stdlib.h>

int main(){

    int numbers[] = {5, 6, 7, 8, 1, 3, 5, 6, 5, 4};
    int i;

    int length = sizeof(numbers) / sizeof(numbers[0]);

    shiftEvensBeforeOdds(numbers, length);

    for(i = 0; i < length; i++){
        printf("%d ", numbers[i]);
    }

    return 0;
}

void shiftEvensBeforeOdds(int array[], int length){

    int i;
    int temp;
    int index = 0;

    for (i = 0; i < length; i++){
        if (array[i] % 2 == 0){
            temp = array[index];
            array[index] = array[i];
            array[i] = temp;
            index++;
        }
    }

}