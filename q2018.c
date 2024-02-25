#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int randomNumberGenerator();

char board[3][3];

void init_board();

void init_board() {
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            board[i][j] = ' ';
        }
    }
}

int main() {

    int valid = 1;

    while(valid) {
        init_board();

        int row_t = randomNumberGenerator();
        int col_t = randomNumberGenerator();
        board[row_t][col_t] = 'T';

        int chance, row, col;
        for(chance=0; chance<3; chance++) {
            printf("Choose a chest (row, col)\n");
            scanf("%i %i", &row, &col);
            if(board[row][col] == 'T') {
                printf("Congratulations, you win!\n");
                break;
            } else {
                if (chance <2) {
                    printf("No treausre here. Please try again.\n");
                    printf("Here's the row: %i", row_t);
                }
            }
        }
        if (chance==3) {
            printf("Sorry, you lose.\n");
        }

        printf("Would you like to play again? (Y/N)\n");
        int letter;
        scanf("%d", &letter);
        if(letter == 'N') {
            valid = 0;
        } else {
            main();
        }
    }
    return 0;
}

int randomNumberGenerator()
{
	srand(time(NULL));
	return rand() % 3;
}

