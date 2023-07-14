int multiplyNumbers(int m, int n) {
    // Write your code here

    if(m==0 || n==0) return 0;

    int small = multiplyNumbers(m, n-1);

    return m+small;

}


