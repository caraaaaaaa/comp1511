// Lab04
// x
// Zixuan Guo z5173593

#include <stdio.h>

int main (void) {
    int size;
    printf("Enter size: ");
    scanf("%d", &size);
    
    int i = 0;
    int j = 0;
    while (i < size) {
        while (j < size) {
            if (j == i || j == size - i - 1) {
                printf("*");
            } else {
                printf("-");
            }
            j++;
            
        }
        printf("\n");
        i++;
        j = 0;
    }
    return 0;  
}
