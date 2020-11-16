// Weekly Test 5
// prime factors
// Zixuan Guo Z5173593

#include <stdio.h>

int checkIfPrime(int number) {
    int factor = 1;
    int a = 0;
    while (factor < number) {
        if (number % factor == 0) {
            a = a + factor;
        }
        factor++;
    }
    return a;
}

int main (void) {
    int number;
    printf("Enter number: ");
    scanf("%d", &number);
    
    int check = checkIfPrime(number);
    if (check == 1) {
        printf("%d is prime\n", number);
    } else {
        printf("The prime factorization of %d is:\n", number);
        int fac = 2;
        while (check != 1)            
            while (number % fac == 0) {
                printf("%d * ", fac);
                number = number / fac;            
            }
            if (checkIfPrime(fac) != 1) {
                fac++;
            }
            
            
        
        printf("= %d\n", number);
    }
}
