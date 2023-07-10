#include <stdlib.h>
#include <stdio.h>

int main(){

    int size;
    char *text = NULL;

    printf("Enter the limit of the text:\n");
    scanf(" %d", &size);

    text = (char *) malloc((size + 1) * sizeof(char));

    if(text){
        printf("Enter some text: \n");
        scanf("%*c");
        fgets(text, size + 1, stdin);

        printf("Inputted text is: %s\n", text);
    }

    free(text);
    text = NULL;

    return 0;
}