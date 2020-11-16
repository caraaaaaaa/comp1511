// lab02
// Icecream Scoops
//Zixuan Guo z5173593

#include <stdio.h> 

int main (void) {
    int scoops;
    int cost;
    printf("How many scoops? ");
    scanf("%d", &scoops);
    
    printf("How many dollars does each scoop cost? ");
    scanf("%d", &cost);
    
    if ((scoops * cost ) <= 10) {
        printf("You have enough money!\n");
    } else {
        printf("Oh no, you don't have enough money :(\n");
    }
    
    return 0;
}
