int staircase(int n){
    /* Don't write main().
     *  Don't read input, it is passed as function argument.
     *  Return output and don't print it.
     *  Taking input and printing output is handled automatically.
     */
    if(n==0){
        return 1;
    }
    if(n==1 || n==2){
        return n;
    }
    
    int ans = staircase(n-1)+staircase(n-2)+staircase(n-3);
    return ans;
    
}