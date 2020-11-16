// weekly 04
// middle3
// Zixuan Guo z5173593

#include <stdio.h>

int main (void) {
    int a;
    int b;
    int c;
    printf("Enter integer: ");
    scanf("%d", &a);
    printf("Enter integer: ");
    scanf("%d", &b);
    printf("Enter integer: ");
    scanf("%d", &c);
    
    if ((a < b && b < c) || a == b || (c < b && b < a)) {
        printf("Middle: %d\n", b);
    } else if ((b < a && a < c) || a == c || (c < a && a < b)) {
        printf("Middle: %d\n", a);
    } else {
        printf("Middle: %d\n", c);
    }
    
    return 0;
}
