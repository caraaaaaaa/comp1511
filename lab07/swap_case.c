// Lab07
// swap_case.c
// Zixuan Guo (z513593)
// 02-04-2019

#include <stdio.h>

int swap_case(int character);

int main (void) {
    int ch = getchar();
    while (ch != EOF) {
        int new = swap_case(ch);
        putchar(new);
        ch = getchar();
    }
    return 0;
}

int swap_case(int character) {
    if (character >= 'a' && character <= 'z') {
        int position = character - 'a';
        return 'A' + position;
    } else if (character >= 'A' && character <= 'Z') {
        int position = character - 'A';
        return 'a' + position;
    } else {
        return character;
    }
    
}
