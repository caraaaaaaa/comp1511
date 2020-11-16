// weekly 04
// l
// Zixuan Guo z5173593

#include <stdio.h>

int main (void) {
    int size;
    printf("Enter size: ");
    scanf("%d", &size);
    
    int i = 1;
    int j = 1;
    while (j <= size) {
        while (i <= size) {
            if (i == 1 || j == size) {
                printf("*");
            } else {
                printf(" ");
            }
            i++;
        }
        j++;
        printf("\n");
        i = 1;
    }
    
    return 0;
}
