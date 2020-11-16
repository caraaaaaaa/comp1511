// Lab04
// Danish Flag
// Zixuan Guo z5173593

#include <stdio.h>

int main (void) {
    int size;
    printf("Enter the flag size: ");
    scanf("%d", &size);
    
    int i = 0;
    int j = 0;
    while (i < (size * 2 - 1)) {
        while (j < (size * 9 )) {
            if (j == (size * 3 - 1) || j == (size * 3 )) {
                printf(" ");
            } else {
                printf("#");
            }
            j++;
        }
        printf("\n");
        i++;
        j = 0;
    }
    
    printf("\n");
    printf("\n");
    
    i = 0;
    j = 0;
    while (i < (size * 2 - 1)) {
        while (j < (size * 9 )) {
            if (j == (size * 3 - 1) || j == (size * 3 )) {
                printf(" ");
            } else {
                printf("#");
            }
            j++;
        }
        printf("\n");
        i++;
        j = 0;
    }
    return 0;
}
