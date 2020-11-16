// Weekly test 06
// Zixuan Guo z5173593
// 28-03-2019

#include <stdio.h>

int main(void) {
    int array[10000];
    int i = 0;
    int noRead = scanf("%d", &array[i]);
    while (noRead != EOF) {
        i++;
        noRead = scanf("%d", &array[i]);
    }
    printf("Indivisible numbers: ");
    
    int a = i;
    i = 0;
    int j = 0;
    while (i < a) {    
        while (j < a) {
            if (array[i] % array[j] == 0 && i != j) {
                j = a+1;
            } else {
                j++;
            }
        }
        
        if (j == a ) {
            printf("%d ", array[i]);
        }
        i++;
        j = 0;
    }
    printf("\n");
    return 0;
}
