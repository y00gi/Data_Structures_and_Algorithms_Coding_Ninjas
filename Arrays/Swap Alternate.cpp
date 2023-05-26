void swapAlternate(int *arr, int size)
{
    //Write your code here

    int curr = 0;
    int next = 1;

    while(next<size)
    {
        int temp = arr[curr];
        arr[curr] = arr[next];
        arr[next] = temp;

        curr+=2;
        next+=2;
    }
}