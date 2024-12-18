/*
 ============================================================================
 Name        : Game.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

//FUNCTION PROTOTYPE
#define SIZE 5

void switchPlayers(char *x, char *y);
void initializeBoard(char board[5][5]);
void printBoard(char board[5][5]);
int checkWin(char board[5][5], char player);
int isFull(char board[5][5]);

int main() {
    char board[5][5];
    char player = 'A';
    char player2 = 'Z';
    int row, col, moves = 0;


    initializeBoard(board);

    while (1) {
        printBoard(board);
        printf("Hello welcome to the GRID FIVE GAME: \n");
        printf("Player %s enter your move (row and column): ", (player == 'A' ? "A" : player == 'Z' ? "Z" :" "));
        scanf("%d %d", &row, &col);

    	   //check if the input is valid
        if (row < 0 || row >= 5 ||col < 0 || col >= 5 ||board[row][col] != ' ')
{
        	printf("Invalid move. Try again.");
            continue;
    }

        // Place the player's marker
        board[row][col] = player;
        moves++;

        // Check for win
        if (checkWin(board, player)) {
            printBoard(board);
            printf("Congratulations Player %s wins the game!!!\n", (player == 'A' ? "A" : player == 'Z' ? "Z" :""));
            break;
        }

        // Check for draw
        if (isFull(board)) {
            printBoard(board);
            printf("It's a draw game.\nSorry no one wins this game.");
            break;
        }

        //call the function to switch the players
       switchPlayers(&player, &player2);

    }
    return 0;
}

void initializeBoard(char board[5][5]) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            board[i][j] = ' ';
        }
    }
}

   //Function to switch the players
   void switchPlayers(char *x, char *y)
{
	   char tempVar;
	   tempVar = *x;
	   *x = *y;
	   *y = tempVar;

}

void printBoard(char board[5][5]) {
    printf("\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf(" %c ", board[i][j]);
            if (j < 5 ) printf("|");
        }
        printf("\n");
        if (i < 5 ) {
            for (int j = 0; j < 5; j++) {
                printf("---");
                if (j < 5 ) printf("+");
            }
            printf("\n");
        }
    }
    printf("\n");
}

int checkWin(char board[5][5], char player) {
    // Check rows and columns
    for (int i = 0; i < 5; i++) {
        if ((board[i][0] == player && board[i][1] == player && board[i][2] == player && board[i][3] == player && board[i][4] == player) ||
            (board[0][i] == player && board[1][i] == player && board[2][i] == player && board[3][i] == player && board[4][i] == player)) {
            return 1;
        }
    }

    // Check diagonals
    if ((board[0][0] == player && board[1][1] == player && board[2][2] == player && board[3][3] == player && board[4][4] == player) ||
        (board[0][4] == player && board[1][3] == player && board[2][2] == player && board[3][1] == player && board[4][0] == player)) {
        return 1;
    }

    return 0;
}

int isFull(char board[5][5]) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (board[i][j] == ' ') {
                return 0; // Found an empty space
            }
        }
    }
    return 1; // No empty spaces
}


