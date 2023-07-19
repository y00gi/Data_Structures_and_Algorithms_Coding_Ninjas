#include<cstring>

int helper(char input[], int last)
{
    if(last == 0)
    {
        return input[last] - '0';
    }

    int small = helper(input, last - 1);
    int a = input[last] - '0';

    return small * 10 + a;
}

int stringToNumber(char input[]) {
    // Write your code here
    if(strlen(input)==0) return 0;
   return helper(input, strlen(input) - 1);
}


