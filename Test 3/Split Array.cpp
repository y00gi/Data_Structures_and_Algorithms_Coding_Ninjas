bool helper(int *input, int size, int start, int lsum, int rsum)
{
    if(start == size)
    {
        return lsum == rsum;
    }

    if(input[start] % 5 == 0)
    {
        lsum+=input[start];
        
    }
    else if(input[start] % 3 == 0)
    {
        rsum+=input[start];
    }
    else
    {
        return helper(input, size, start+1, lsum+input[start], rsum) || 
            helper(input, size, start+1, lsum, rsum+input[start]);
    }

    return helper(input, size, start+1, lsum, rsum);

}

bool splitArray(int *input, int size) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */

    return helper(input, size, 0, 0, 0);
    
}
