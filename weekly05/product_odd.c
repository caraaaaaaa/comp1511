// Weekly Test 5
// product odd
// Zixuan Guo Z5173593

#include <stdio.h>

int main (void) {
    int lower;
    printf("Enter lower: ");
    scanf("%d", &lower);
    
    int upper;
    printf("Enter upper: ");
    scanf("%d", &upper);
    
    int i = 0;
    int product = 1;
    while (i < upper) {
        if (i > lower && i % 2 == 1) {
            product = product * i;
        }
        i++;
    }
    printf("%d\n", product);
    return 0;
}
