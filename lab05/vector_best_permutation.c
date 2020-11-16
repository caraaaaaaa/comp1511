// Lab 5
// vector_best_permutation
// Zixuan Guo Z5173593

#include <stdio.h>
#include <math.h> 

int main (void) {
    int length;
    printf("Enter vector length: ");
    scanf("%d", &length);
    
    printf("Enter vector 1: ");
    int arrayV1[length];
    int i = 0;
    while (i < length) {
        scanf("%d", &arrayV1[i]);
        i++;
    }
    
    printf("Enter vector 2: ");
    int arrayV2[length];
    int q = 0;
    while (q < length) {
        scanf("%d", &arrayV1[q]);
        q++;
    }
    
    printf("Optimal permutation: ");
    
    
    printf("\n");
    
    return 0;
}
