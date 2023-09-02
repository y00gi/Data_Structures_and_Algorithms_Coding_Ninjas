
void reverse(int *input, int start, int end)
{
    while(start<=end)
    {
        int temp = input[end];
        input[end] = input[start];
        input[start] = temp;
        start++; end--;
    }
}

void rotate(int *input, int d, int n)
{
    //Write your code here
   if(n==0 || d==0) return;
   if(d>n)
   {
       d=d%n;
   }

    reverse(input, 0, d-1);
    reverse(input, d, n-1);
    reverse(input, 0, n-1);

}