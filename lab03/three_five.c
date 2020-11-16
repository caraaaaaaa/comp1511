// lab03
// three_five
// Zixuan Guo z5173593

#include <stdio.h> 

int main (void) {
    int number;
    printf("Enter number: ");
    scanf("%d", &number);
    
    int counter = 3;
    while (counter < number) {
        if (counter % 3 == 0 || counter % 5 == 0) {
            printf("%d\n", counter);
        }
        counter++;
    }
    
    return 0;
}
