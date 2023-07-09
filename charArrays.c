#include <stdio.h>
#include <stdbool.h>

int countNumberOfChars(char array[]);
void concatenateTwoCharStrings(char result[], const char str1[], const char str2[]);
bool compareStrings(const char str1[], const char str2[]);

int main(){

    char array[] = "Testing";
    const char str1[] = "Hello ";
    const char str2[] = "World";
    const char str3[] = "Hello ";
    char result[25] = "";

    int length = 0;
    bool equal;

    length = countNumberOfChars(array);
    printf("\n%d\n", length);

    concatenateTwoCharStrings(result, str1, str2);

    printf("%s\n", result);
    
    equal = compareStrings(str1, str3);
    printf("%d\n", equal);
    return 0;
}

int countNumberOfChars(char array[]){
    
    int count = 0;
    
    for(int i = 0; array[i] != '\0'; i++){
        if(array[i]){
            count++;
        } 
    }

    return count;
}

void concatenateTwoCharStrings(char result[], const char str1[], const char str2[]){

    int count = 0;
    int j = 0;

    for(int i = 0; str1[i] != '\0'; i++){
        result[i] = str1[i];
        count++;
    }

    for(count; str2[j] != '\0'; count++, j++){
        result[count] = str2[j];
    }

}

bool compareStrings(const char str1[], const char str2[]){

    int i = 0;

    for(i; str1[i] != '\0'; i++){
        if(str1[i] != str2[i]){
            return false;
        }
    }
    
    return true;
}
