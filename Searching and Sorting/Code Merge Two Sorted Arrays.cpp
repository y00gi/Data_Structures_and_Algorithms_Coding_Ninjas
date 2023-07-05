void merge(int arr1[], int size1, int arr2[], int size2, int ans[])
{
    //Write your code here   
    //You don't have to print or return anything, 
    //just store the final answer in third array ans. 

    int size = size1 + size2;

    int i=0, j=0, k=0;

    while(i<size1 && j<size2 && k<size)
    {
        if(arr1[i]<arr2[j])
        {
            ans[k] = arr1[i];
            k++;
            i++;
        }
        else
        {
            ans[k] = arr2[j];
            k++;
            j++;
        }
    }

    while(i<size1)
    {
        ans[k] = arr1[i];
        k++;
        i++;
    }

    while(j<size2)
    {
        ans[k] = arr2[j];
        k++;
        j++;
    }

}

