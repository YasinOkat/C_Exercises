#include <stdio.h>
#include <stdbool.h>

bool checkForWin(char array[10]);
void drawBoard(char array[10]);
int markBoard(int selection, char array[10], int player);

char array[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

int main(){

    int player = 1;
    int selection;

    drawBoard(array);

    while(!checkForWin(array)){
        printf("\nPlayer %d, select a value\n", player);
        scanf("%d", &selection);

        if(array[selection] == 'X' || array[selection] == 'O' || selection > 9 || selection < 1){
            printf("Invalid value");
            continue;
        }

        markBoard(selection, array, player);
        player = (player == 1) ? 2 : 1;
        drawBoard(array);
    }

    if(checkForWin){
        printf("\nPlayer %d have lost!", player);
    }
}

void drawBoard(char array[10]){

    for (int i = 1; i < 9; i+=3) {
        printf("\n");
        printf("%c   |   %c   |   %c ", array[i], array[i + 1], array[i + 2]);
        printf("\n_________________\n");
    }
    printf("\n");
}

int markBoard(int selection, char array[10], int player){
    
    if(player == 1){
        array[selection] = 'X';
    }
    else if(player == 2){
        array[selection] = 'O';
    }
    return 0;
}

bool checkForWin(char array[10]){
    
    int wins[8][3] = {
        {1, 2, 3}, {4, 5, 6}, {7, 8, 9},
        {1, 4, 7}, {2, 5, 8}, {3, 6, 9},
        {1, 5, 9}, {3, 5, 7}
    };

    for (int i = 0; i < 8; ++i) {
        if (array[wins[i][0]] == array[wins[i][1]] && array[wins[i][1]] == array[wins[i][2]]) {
            return true;
        }
    }
}
