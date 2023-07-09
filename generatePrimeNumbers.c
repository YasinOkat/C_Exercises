#include <stdio.h>

int main(){

    int array[100];
    int i;
    int j;
    int index = 2;
    int count;

    array[0] = 2;
    array[1] = 3;

    for (i = 4; i < 100; i++){
        for (j = 2; j < i; j++){
            if (i % j == 0)
            {
                count++;
                break;
            }
        }
        if(count < 1)
        {
            array[index] = i;
            index++;
        }
        count = 0;
    }

    for (i = 0; i < index; i++){
        printf("%d\n", array[i]);
    }

}