// Weekly07
// Zixuan Guo (z5173593)
// 04-04-2019

#include <stdio.h> 

#define TRUE 1
#define FALSE 0


int main (void) {
    int number[10000] = {0};
    int i = 0;
    while (i < 10000) {
        scanf("%d", &number[i]);
        i++;
    }
    
    int x = 0;
    int max = 0;
    while (x < i) {
        if (number[x] > max) {
            max = number[x];
        }
        x++;
    }
    // printf("%d\n", max);
    
    int f = 1;
    int counter = 0;
    while (f < max && counter < i) {
        if (f != number[counter]) {
            counter++;
        } else {
            f++;
            counter = 0;
        }
        
        if (counter == i) {
            printf("%d ", f);
            f++;
            counter = 0;
        }
    }
    printf("\n");
    return 0;
}
