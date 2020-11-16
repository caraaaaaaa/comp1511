// lab03
// percentage
// Zixuan Guo z5173593

#include <stdio.h> 

int main (void) {
    int total;
    double number;
    double percentage;
    
    printf("Enter the total number of marks in the exam: ");
    scanf("%d", &total);
    printf("Enter the number of marks the student was awarded: ");
    scanf("%lf", &number);
    
    percentage = number / total * 100;
    
    printf("The student scored %.0lf%% in this exam.\n", percentage);
    return 0;
}
