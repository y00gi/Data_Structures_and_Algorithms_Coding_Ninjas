
int length(char str[])
{
    int size = 0;
    for(int i=0; str[i]!='\0'; i++)
    {
        size++;
    }

    return size;
}

bool checkPalindrome(char str[]) {
    // Write your code here

    int size = length(str);

    for(int i=0; i<=size/2; i++)
    {
        if(str[i]!=str[size-i-1])
        {
            return false;
        }
    }

    return true;

}
