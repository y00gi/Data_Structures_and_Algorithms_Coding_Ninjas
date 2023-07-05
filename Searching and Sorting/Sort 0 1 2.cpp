void sort012(int *arr, int n)
{
    //Write your code here

    int zero = 0;
    int two = n-1;
    int i = 0;

    while(i<=two)
    {
        if(arr[i] == 0)
        {
            swap(arr[i], arr[zero]);
            i++;
            zero++;
        }
        else if(arr[i] == 2)
        {
            swap(arr[i], arr[two]);
            
            two--;
        }
        else{i++;}
    }
    
}