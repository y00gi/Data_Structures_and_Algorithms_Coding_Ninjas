
void merge(vector<int>& arr, int l, int mid, int r)
{
    int num1 = mid - l + 1;
    int num2 = r - mid;

    vector<int> L(num1), R(num2);
    
    for(int i=0; i<num1; ++i)
    {
        L[i] = arr[l+i];
    }

    for(int i=0; i<num2; ++i)
    {
        R[i] = arr[mid+1+i];
    }

    int i = 0;
    int j = 0;
    int k = l;

    while(i<num1 && j<num2)
    {
        if(L[i] < R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }

        k++;
    }

    while(i<num1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    while(j<num2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(vector<int>& arr, int l, int r) {
    // Write Your Code Here

    if(l < r)
    {
        int mid = (l+r)/2;
        mergeSort(arr, l, mid);
        mergeSort(arr, mid+1, r);
        merge(arr, l, mid, r);
    }

}