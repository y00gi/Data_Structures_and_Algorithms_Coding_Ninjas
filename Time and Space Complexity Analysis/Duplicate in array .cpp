int findDuplicate(int *arr, int n)
{
    //Write your code here

    int num = ((n-2)*(n-1))/2;
    int total = 0;

    for(int i =0; i<n; i++)
    {
        total+=arr[i];
    }

    return total-num;

}