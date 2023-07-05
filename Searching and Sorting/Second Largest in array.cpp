#include <limits.h>
int findSecondLargest(int arr[], int n)
{
    //Write your code here

    int first = INT_MIN;
    int second = INT_MIN;

    for(int i =0; i<n; i++)
    {
        if(arr[i]>first)
        {
            
            second = first;
            first = arr[i];
        }

        if(arr[i]<first && arr[i]> second)
        {
            second = arr[i];
        }
    }

    return second;

}