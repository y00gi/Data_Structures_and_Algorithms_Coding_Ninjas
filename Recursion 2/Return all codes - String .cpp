#include <iostream>
#include <string.h>
using namespace std;

int getCodes(string input, string output[10000]) {
    // Base case: If the input is empty, add an empty string to the output array and return 1
    if (input.empty()) {
        output[0] = "";
        return 1;
    }

    // Recursive case:
    int size1 = 0, size2 = 0;

    // Option 1: Include the first character as a single character code
    int firstDigit = input[0] - '0';
    char firstCh = 'a' + firstDigit - 1;
    string smallOutput1[10000];
    size1 = getCodes(input.substr(1), smallOutput1);

    // Append the first character to all codes in smallOutput1
    for (int i = 0; i < size1; i++) {
        output[i] = firstCh + smallOutput1[i];
    }

    // Option 2: Include the first two characters as a two-character code (if possible)
    if (input.length() >= 2) {
        int firstTwoDigits = (input[0] - '0') * 10 + (input[1] - '0');
        if (firstTwoDigits >= 10 && firstTwoDigits <= 26) {
            char firstTwoCh = 'a' + firstTwoDigits - 1;
            string smallOutput2[10000];
            size2 = getCodes(input.substr(2), smallOutput2);

            // Append the first two characters to all codes in smallOutput2
            for (int i = 0; i < size2; i++) {
                output[size1 + i] = firstTwoCh + smallOutput2[i];
            }
        }
    }

    // Return the total number of codes in the output array
    return size1 + size2;
}

