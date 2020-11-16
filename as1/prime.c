#include <stdio.h>


int check_prime (int num);
int check_coco (int num1, int num2);
int round_max2 (int num1, int num2);

int main (void) {
    int number = 34;
    int number2 = 25;
    int a = check_prime (number);
    int b = check_coco (number, number2);
    int c = round_max2 (number, number2);
    printf("%d\n", c);
}



int check_prime (int num) {
    int i = 2;
    while (i < num) {
        if (num % i == 0){
            return 0;
        }
        i++;
    }
    return 1;
}

int check_coco (int num1, int num2) {
    int i = 2;
    while (i < num1 || i < num2) {
        if (num1 % i == 0 && num2 % i == 0) {
            return 1;
        } else {
            i++;
        }
    }
    return 0;
}



int round_max2 (int num1, int num2) {
    if (check_coco(num1, num2) == 1) {
        if (num1 > num2 ) {
            return num1;
        } else {
            return num2;
        }
    } else {
        return num1;
    }
}
