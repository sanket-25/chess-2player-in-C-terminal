#include <stdio.h>
#include <string.h>
#include <stdbool.h>

struct athlete {
    char name[50];
    bool isWhite;
};

int main() {
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
    
    return 0;
}