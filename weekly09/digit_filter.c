// Weekly 09
// digit filiter
// Zixuan Guo (z5173593)

#include <stdio.h>

int filter(int character);

int main(int argc, char *argv[]) {
    int ch = getchar();
    while (ch != EOF) {
        putchar(filter(ch));
        ch = getchar();
    }
    
    return 0;
}

int filter(int character) {
    if (!((character >= '0' && character <= '9') 
        || character == ' ' || character == '\n')) {
        character = '.';
    } 
    return character;
}
