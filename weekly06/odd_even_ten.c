// Weekly test 06
// Zixuan Guo z5173593
// 28-03-2019

#include <stdio.h>

int main(void) {
    int array[10];
    int i = 0;
    
    while (i < 10) {
        scanf("%d", &array[i]);
        i++;
    }
    
    printf("Odd numbers were: ");
    i = 0;
    while (i < 10) {
    if (array[i] % 2 == 1) {
        printf("%d ", array[i]);
    }
    i++;
    }
    printf("\nEven numbers were: ");
    i = 0;
    while (i < 10) {
    if (array[i] % 2 == 0) {
        printf("%d ", array[i]);
    }
    i++;
    }
    printf("\n");
    
    return 0;
}
