void arrange(int *arr, int n)
{
    //Write your code here
    int start = 0, end = n-1;
    int count = 1;
    while(start<end)
    {
        if(count%2==0)
        {
            arr[end] = count;
            end--;
        }
        else
        {
            arr[start] = count;
            start++;
        }
        count++;
    }

}