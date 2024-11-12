#include <stdio.h>
#include <string.h>
#include <stdbool.h>

struct athlete {
    char name[50];
    bool isWhite;
};

char getChessPiece(int row, int col) {
    if (row == 0 || row == 7) {
        int position = (col - 2) / 4;
        switch (position) {
            case 0:
            case 7:
                return (row == 0) ? 'R' : 'r';
            case 1:
            case 6:
                return (row == 0) ? 'N' : 'n';
            case 2:
            case 5:
                return (row == 0) ? 'B' : 'b';
            case 3:
                return (row == 0) ? 'Q' : 'q';
            case 4:
                return (row == 0) ? 'K' : 'k';
            default:
                return ' ';
        }
    }
    if (row == 1) return 'P';
    if (row == 6) return 'p';

    return ' ';
}

void printChessBoard() {
    for (int row = 0; row < 8; row++) {
        for (int line = 0; line < 5; line++) {
            for (int col = 0; col <= 32; col++) {
                if (line == 0 || line == 4) {
                    printf(" - ");
                } else if (col % 4 == 0) {
                    printf(" | ");
                } else if (line == 2 && col % 4 == 2) {
                    printf(" %c ", getChessPiece(row, col));
                } else {
                    printf("   ");
                }
            }
            printf("\n");
        }
    }
}

int main() {
    printChessBoard();
    struct athlete a1, a2;

    printf("Enter Athlete 1 Name: ");
    scanf("%s", a1.name);

    printf("Enter Athlete 2 Name: ");
    scanf("%s", a2.name);

    printf("1. %s v/s 2. %s\n", a1.name, a2.name);

    int isColor;
    printf("Enter Athlete number choosing white (1 or 2): ");
    scanf("%d", &isColor);

    if (isColor == 1) {
        a1.isWhite = true;
        a2.isWhite = false;
    } else {
        a1.isWhite = false;
        a2.isWhite = true;
    }

    if (a1.isWhite) {
        printf("%s is White.\n", a1.name);
    } else {
        printf("%s is Black.\n", a1.name);
    }

    if (a2.isWhite) {
        printf("%s is White.\n", a2.name);
    } else {
        printf("%s is Black.\n", a2.name);
    }

    printChessBoard();
    return 0;
}
