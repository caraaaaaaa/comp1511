// lab03
// order3_challenge1
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
    
    
    printf("The integers in order are: %d %d %d\n",( (a <= b && a<=c) * a + (b <= a && b <= c) * b + (c <= a && c <= b) * c) / ((a <= b && a<=c) + (b <= a && b <= c) + (c <= a && c <= b)) , a+b+c-( (a <= b && a<=c) * a + (b <= a && b <= c) * b + (c <= a && c <= b) * c) / ((a <= b && a<=c) + (b <= a && b <= c) + (c <= a && c <= b)) -( (a >= b && a>=c) * a + (b >= a && b >= c) * b + (c >= a && c >= b) * c) / ((a >= b && a>=c) + (b >= a && b >= c) + (c >= a && c >= b)) , ( (a >= b && a>=c) * a + (b >= a && b >= c) * b + (c >= a && c >= b) * c) / ((a >= b && a>=c) + (b >= a && b >= c) + (c >= a && c >= b)));
    return 0;
}
