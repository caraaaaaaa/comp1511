// Weekly 09
// digit filiter
// Zixuan Guo (z5173593)

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    char ch = getchar();
    while(ch != EOF) {
        if(ch >= '0' && ch <= '9') {
            putchar(argv[1][- '0' + ch]);
        } else{
            putchar(ch);
            
        }
        ch = getchar();
    }
    return 0;
}
