// Lab07
// caesar.c
// Zixuan Guo (z513593)
// 02-04-2019

#include <stdio.h>
#include <stdlib.h>

int encrypt(int character,int shift);

int main(int argc, char *argv[]) {
    int shift = 0;
    int i = 1;
    while (i < argc) {
        shift = shift + atoi(argv[i]);
        i = i + 1;
    }
    int ch;
    char str[] = {'\0'};

    ch = getchar();
    putchar(encrypt(ch,shift));
    while (ch != EOF) {
        ch = getchar();
        if (ch != EOF) {
            putchar(encrypt(ch,shift));
        }
    }

    return 0;
}

int encrypt(int character,int shift) {
    while(shift < 0) {
        shift = shift + 26;
    }
    shift = shift % 26;
    if (character >= 'A' && character <= 'Z') {
        character = character + shift;
        if (character > 'Z') {
            character = character - 26;
        }
    }else{
        if (character >= 'a' && character <= 'z') {
            character = character + shift;
            if (character > 'z') {
                character = character - 26;
            }
        }
    }
    return character;
}
