// Weekly 09
// word count
// Zixuan Guo (z5173593)

#include <stdio.h>

int main (int argc, char *argv[]) {
    char ch = getchar();
    int ch_counter = 0;
    int line_counter = 0;
    int word_counter = 0;
    int check = 0;
    
    while (ch != EOF) {
        if (check == 0 && !(ch == ' ' || ch == '\n')) {
            check = 1;
        } 
        if (ch == '\n') {
            line_counter++;
        }
        if (check == 1 && (ch == ' ' || ch == '\n')) {
            check = 0;
            word_counter++;
        }
        ch = getchar();
        ch_counter++;
    }
    
    if (check == 1) {
        word_counter++;
    }
    printf("%d lines %d words %d characters\n", line_counter, word_counter, ch_counter);
    return 0;
}
