// Lab 5
// vector_permutation
// Zixuan Guo Z5173593

#include <stdio.h>
#include <math.h> 

int main (void) {
    int length;
    printf("Enter vector length: ");
    scanf("%d", &length);
    
    printf("Enter vector: ");
    int arrayV1[length];
    int i = 0;
    while (i < length) {
        scanf("%d", &arrayV1[i]);
        i++;
    }
    
    
    printf("Enter permutation: ");
    int arrayV2[length];
    int j = 0;
    while (j < length ) {
        scanf("%d", &arrayV2[j]);
        j++;
    }
    
    j = 0;
    int a = 0;
    while (j < length ) {
        if (arrayV2[j] >= length) {
            a = 1;
        } 
        j++;
    }
    
    j = 0;
    while (j < length) {
        if (a == 0) {
            printf("%d", arrayV1[arrayV2[j]]);
        } else {
            printf("Invalid permutation");
            break;
        }
        j++;
    }
    printf("\n");
    
    return 0;
}
