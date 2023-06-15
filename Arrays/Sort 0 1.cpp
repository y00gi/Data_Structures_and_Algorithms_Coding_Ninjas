void sortZeroesAndOne(int input[], int size)
{
    //Write your code here

    int start = 0;
    int end = size-1;

    while(start<end)
    {
        if(input[start]==1 && input[end]==0)
        {
            input[start]=0;
            input[end]=1;
            start++;
            end--;
        }
        else if(input[start]==1 && input[end]==1)
        {
            end--;
        }
        else
        {
            start++;
        }

        
    }

}