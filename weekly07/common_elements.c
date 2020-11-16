// copy all of the values in source1 which are also found in source2 into destination
// return the number of elements copied into destination

int common_elements(int length, int source1[length], int source2[length], int destination[length]) {
    // PUT YOUR CODE HERE (you must change the next line!)
    int i = 0;
    int j = 0;
    int k = 0;
    while (i < length) {
        while (j < length) {
            if (source1[i] == source2[j]) {
                destination[k] = source1[i];
                source1[i] = -1;
                k++;
            }
            j++;
        }
        i++;
        j = 0;
    }
    return k;
}

// You may optionally add a main function to test your common_elements function.
// It will not be marked.
// Only your common_elements function will be marked.
