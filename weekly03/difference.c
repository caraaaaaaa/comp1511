// Weekly 03
// difference
// Zixuan Guo z5173593

#include <stdio.h> 

int main (void) {
    int a;
    int b;
    scanf("%d %d", &a, &b);
    
    if (a > b) {
        printf("%d\n", a - b);
    } else if (a < b) {
        printf("%d\n", b - a);
    } else {
        printf("equal\n");
    }
    
    return 0;
}
