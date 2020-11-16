// lab02
// Challenge
// Dating Range
//Zixuan Guo z5173593

#include <stdio.h> 

int main (void) {
    printf("Enter your age: ");
    int age;
    scanf("%d" , &age);
    
    if (age > 12) {
        printf("Your dating range is %d to %d years old.\n" , (age/2) + 7, (age * 2) - 14);
    } else {
        printf("You are too young to be dating.\n");
    }
}
