int findUnique(int *arr, int size)
{
    //Write your code here

    for(int i=0; i<size; i++)
    {

        int j = 0;
        for(; j<size; j++)
        {
            if(j!=i && arr[i]==arr[j])
            {
                break;
            }

        }

        if(j==size)
        {
            return arr[i];
        }
    }

    

}