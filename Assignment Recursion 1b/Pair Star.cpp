// Change in the given string itself. So no need to return or print the changed string.
#include<cstring>
void helper(char input[], int start, int end)
{
    if(input[start] == '\0') return;

    if(input[start] == input[start+1])
    {
        for(int i = end; i>start; i--)
        {
            input[i+1] = input[i];
        }
        input[start+1] = '*';
        input[end+1] = '\0';
        helper(input, start+1, end+1);
    }
    else helper(input, start+1, end);

}

void pairStar(char input[]) {
    // Write your code here

    helper(input, 0, strlen(input));

}
