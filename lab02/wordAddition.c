// lab02
// Challenge
// Dating
//Zixuan Guo z5173593

#include <stdio.h> 

int main (void) {
    int n;
    int m;
    
    printf("Please enter two integers: ");
    scanf("%d %d", &n, &m);
    
    int sum = n + m;
    // if neg print "negative"
    if (n < 0) {
        printf("negative");
    }
    
    if (n == 10 || n == -10) {
        printf("ten");
    } else if (n == 9 || n == -9) {
        printf("nine");
    } else if (n == 8|| n == -8) {
        printf("eight");
    } else if (n == 7|| n == -7) {
        printf("seven");
    } else if (n == 6|| n == -6) {
        printf("six");
    } else if (n == 5|| n == -5) {
        printf("five");
    } else if (n == 4|| n == -4) {
        printf("four");
    } else if (n == 3|| n == -3) {
        printf("three");
    } else if (n == 2|| n == -2) {
        printf("two");
    } else if (n == 1|| n == -1) {
        printf("one");
    } else if (n == 0) {
        printf("zero");
    }  else {
        printf("%d", n);
    }
    
    printf(" + ");
    
    if (m < 0) {
        printf("negative");
    }
    
    if (m == 10 || m == -10) {
        printf("ten");
    } else if (m == 9|| m == -9) {
        printf("nine");
    } else if (m == 8|| m == -8) {
        printf("eight");
    } else if (m == 7|| m == -7) {
        printf("seven");
    } else if (m == 6|| m == -6) {
        printf("six");
    } else if (m == 5|| m == -5) {
        printf("five");
    } else if (m == 4|| m == -4) {
        printf("four");
    } else if (m == 3|| m == -3) {
        printf("three");
    } else if (m == 2|| m == -2) {
        printf("two");
    } else if (m == 1|| m == -1) {
        printf("one");
    } else if (m == 0) {
        printf("zero");
    }  else {
        printf("%d", m);
    }
    
    printf(" = ");
    
    if (sum < 0) {
        printf("negative");
    }
    
    if (sum == 10 || sum == -10) {
        printf("ten");
    } else if (sum == 9|| sum == -9) {
        printf("nine");
    } else if (sum == 8|| sum == -8) {
        printf("eight");
    } else if (sum == 7|| sum == -7) {
        printf("seven");
    } else if (sum == 6|| sum == -6) {
        printf("six");
    } else if (sum == 5|| sum == -5) {
        printf("five");
    } else if (sum == 4|| sum == -4) {
        printf("four");
    } else if (sum == 3|| sum == -3) {
        printf("three");
    } else if (sum == 2|| sum == -2) {
        printf("two");
    } else if (sum == 1|| sum == -1) {
        printf("one");
    } else if (sum == 0) {
        printf("zero");
    }  else {
        printf("%d", sum);
    }
    
    printf("\n");
    return 0;
}
