// Lab07
// substitution.c
// Zixuan Guo (z513593)
// 02-04-2019

#include <stdio.h>
#include <stdlib.h>

int substitution(int character,char *argv);

int main(int argc, char *argv[]) {
    int ch = getchar();
    putchar(substitution(ch,argv[1]));
    while (ch != EOF) {
        ch = getchar();
        if (ch != EOF) { 
            putchar(substitution(ch,argv[1]));
        }
    }

    return 0;
}

int substitution(int character,char *argv){
    if (character >= 'A' && character <= 'Z') {
        character = character - 64;
        character = argv[character-1] - 32;
    }else{
        if (character >= 'a' && character <= 'z') {
            character = character - 96;
            character = argv[character-1];
        }
    }
    return character;
}
