// Lab04
// perfect
// Zixuan Guo z5173593

#include <stdio.h>

int main (void) {
    int number;
    printf("Enter number: ");
    scanf("%d", &number);
    
    printf("The factors of %d are: \n", number);
    int counter = 1;
    while (counter <= number) {
        if (number % counter == 0) {
            printf("%d\n", counter);
        }
        counter++;
    }
    
    int sum = 0;
    counter = 1;
    while (counter <= number) {
        if (number % counter == 0) {
            sum += counter;
        }
        counter++;
    }
    printf("Sum of factors = %d\n", sum);
    
    if (sum - number == number) {
        printf("%d is a perfect number\n", number);
    } else {
        printf("%d is not a perfect number\n", number);
    }
    return 0;
}
