void insertionSort(int input[], int size)
{
    //Write your code here

    for(int i=1; i<size; i++)
    {
        int key = input[i];
        int j = i-1;

        while(j>=0 && input[j]>key)
        {
            input[j+1] = input[j];
            j--;
        }
        input[j+1] = key;
    }

}