void rotate(int *input, int d, int n)
{
    //Write your code here

    int arr[d];

    for(int i=0; i<d; i++)
    {
        arr[i] = input[i];
    }

    for(int i=0; i<n-d; i++)
    {
        input[i] = input[i+d];
    }

   int j = 0;
   int k = n-d;
   while(j<d)
   {
       input[k]=arr[j];
       k++; j++;
   }
    
}