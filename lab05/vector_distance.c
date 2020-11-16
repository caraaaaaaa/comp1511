// Lab 5
// vector_distance
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
    int j = 0;
    while (j < length) {
        scanf("%d", &arrayV2[j]);
        j++;
    }
    
    int distance;
    int euclideanDistance = 0;
    int a = 0;
    int b = 0;
    while (a < length) {
        while (b == a) {
            distance = (arrayV1[a] - arrayV2[b]) * (arrayV1[a] - arrayV2[b]);
            b++;
        }
        a++;
        
        euclideanDistance = euclideanDistance + distance;
    }
    
    printf("Euclidean distance = %lf\n", sqrt(euclideanDistance));
    return 0;
}


