#include<algorithm>

int maximumProfit(int budget[], int n) {
    // Write your code here

    sort(budget, budget+n);

    int *arr = new int[n];

    for(int i=0; i<n; i++)
    {
        arr[i] = budget[i] * (n-i);
    }

    int max = 0;
    for(int i=0; i<n; i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }
    }

    delete arr;
    return max;

}
