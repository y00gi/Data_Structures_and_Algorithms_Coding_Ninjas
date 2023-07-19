// Change in the given string itself. So no need to return or print anything
#include<cstring>
void helper(char input[], int start, int end)
{
    if(start>=end) return;
    if(input[start] == 'x')
    {
        for(int i=start; i<end-1; i++)
        {
            input[i] = input[i+1];
        }
        end--;
        input[end] = '\0';
        
    }
    else start++;

    helper(input, start, end);
}

void removeX(char input[]) {
    // Write your code here
    helper(input, 0, strlen(input));
    return;
}
