#include <string.h>
#include<iostream>
using namespace std;

void printAllPossibleCodes(string input, string output)
{
    if(input.empty())
    {
        cout << output << endl;
        return;
    }

    int firstDigit = input[0] - '0';
    char firstCh = 'a' + firstDigit - 1;
    printAllPossibleCodes(input.substr(1), output+firstCh);

    if(input.length() >= 2)
    {
        int firstTwoDigits = (input[0] - '0') * 10 + (input[1] - '0');
        if(firstTwoDigits >= 10 && firstTwoDigits <= 26)
        {
            char firstTwoCh = 'a' + firstTwoDigits - 1;
            printAllPossibleCodes(input.substr(2), output+firstTwoCh);
        }
    }
}

void printAllPossibleCodes(string input) {
    /*
    Given the input as a string, print all its possible combinations. You do not need to return anything.
    */

   return printAllPossibleCodes(input, "");
}
