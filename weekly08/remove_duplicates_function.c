// weekly 08
// count_even_function.c
// Zixuan Guo (z5173593)

#include <stdio.h>
#include <stdlib.h>

int remove_duplicates(int length, int source[length], int destination[length]);

int remove_duplicates(int length, int source[length], int destination[length]) {
    int i = 0;
    int j = 0;
    int k = 0;
    int check = 0;
    while (i < length) {
        check = 0;
        j = 0;
        while (j < i) {
            if (source[i] == source[j]) {
                check = 1;
            }
            j++;
        }
        
        if (check == 0) {
            destination[k] = source[i];
            k++;
        }
        i++;
    }
    
    return k;
}
