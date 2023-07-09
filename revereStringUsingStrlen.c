#include <stdio.h>
#include <string.h>

int main(){

    char string[60] = "";
    char temp[60] = "";

    printf("Enter a string to be reversed:\n");
    scanf("%s", string);
    
    int length = strlen(string);

    for(int i = 0; i < length; i++){
        temp[length - 1 - i] = string[i];
    }

    temp[length] = '\0';

    printf("%s\n", temp);

    return 0;
}