// Lab07
// 02-04-2019
// Zixuan Guo (z5173593)


#include <stdio.h>

int is_vowel(int character);

int main (void) {
    int ch = getchar();
    while (ch != EOF) {
        int d = is_vowel(ch);
        if (d == 0) {
            putchar(ch);
        } 
        ch = getchar();
        
    }
    return 0;
}

int is_vowel(int character) {
    if (character == 'a' || character == 'e' || character == 'i' || 
        character == 'o' || character == 'u') {
        return 1;
    } else {
        return 0;
    }
}
