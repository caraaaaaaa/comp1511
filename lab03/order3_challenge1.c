// lab03
// order3_challenge1
// Zixuan Guo z5173593

#include <stdio.h> 

int main (void) {
    int a;
    int b;
    int c;
    int e;
    int f;
    int g;
    
    printf("Enter integer: ");
    scanf("%d", &a);
    printf("Enter integer: ");
    scanf("%d", &b);
    printf("Enter integer: ");
    scanf("%d", &c);
    
    e = (a <= b && a<=c) * a + ((b <= a && b <= c)) * b + ((c <= a && c <= b)) * c;
    int divide_by_me = (a <= b && a<=c) + (b <= a && b <= c) + (c <= a && c <= b);
    e = e / divide_by_me;
    g = (a <= c && b<= c) * c + (a<=b && c<=b) * b + (b<=a && c<=a) * a;
    int divide = (a <= c && b<= c) + (a<=b && c<=b) + (b<=a && c<=a);
    g = g / divide;
    f = a + b + c - e - g;
    
    printf("The integers in order are: %d %d %d\n", e, f, g);
    return 0;
}
