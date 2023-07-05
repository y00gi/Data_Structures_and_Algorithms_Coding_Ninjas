void pushZeroesEnd(int *input, int size)
{
    //Write your code here

    int nonzero = 0;
    int i = 0;

    while(i<size)
    {

        if(input[i]!=0)
        {
            swap(input[i], input[nonzero]);
            nonzero++;
        }

        i++;
    }
}