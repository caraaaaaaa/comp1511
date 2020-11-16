// Lab04
// boxes
// Zixuan Guo z5173593

#include <stdio.h>

int main (void) {
    int box;
    printf("How many boxes: ");
    scanf("%d", &box);

    int i = 1;
    int j = 1;
    while (i <= box * 4 - 1) {
        while (j <= box * 4 - 1) {
            if ( i == 1 || j == 1 || j == box * 4 - 1 || i == box * 4 - 1
                || (i == j && j % 2 != 0) || (i % 2 != 0 && j % 2 != 0) 
                || ((j % 2 == 0 && j != 2 && j != box*4-2) && i % 2 != 0) ) {
                printf("#");
            } else {
                printf(" ");
            }
            j++;
        }
        printf("\n");
        i++;
        j = 1;
    }
    return 0;
}
