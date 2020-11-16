// Weekly Test 5
// count up
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
    while (i < upper) {
        if (i > lower) {
            printf("%d\n", i);
        }
        i++;
    }
}
