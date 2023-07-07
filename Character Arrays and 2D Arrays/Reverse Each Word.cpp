
void reverse(char input[], int start, int end)
{
    while(start<=end)
    {
        swap(input[start], input[end]);
        start++;
        end--;
    }
}

void reverseEachWord(char input[]) {
    // Write your code here
    int start = 0;
    int end = 0;
    int i;
    for(i=0; input[i]!='\0'; i++)
    {
        if(input[i] == ' ')
        {
            end = i-1;
            reverse(input, start, end);
            start = i+1;
        }
    }
    reverse(input, start, i-1);

}