#include <stdio.h>

int calculateLength(const char *string);

int main(){

    const char string[50] = "TEsting";

    int length = calculateLength(string);

    printf("%d\n", length);
}

int calculateLength(const char *string){

    const char *lastAddress = string;

    while(*lastAddress){
        ++lastAddress;
    }

    return lastAddress - string;

}