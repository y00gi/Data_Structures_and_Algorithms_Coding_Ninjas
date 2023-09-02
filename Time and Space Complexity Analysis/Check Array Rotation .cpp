int arrayRotateCheck(int *input, int size)
{
    //Write your code here

    for(int i=1; i<size; i++)
    {
        if(input[i]<input[i-1]) return i;
    }

    return 0;
}