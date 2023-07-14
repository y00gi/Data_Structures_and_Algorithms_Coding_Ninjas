
int countZeros(int n) {
    // Write your code here
    if(n<=9)
    {
        if(n%10 == 0) return 1;
        else return 0;
    }
    

    int small = countZeros(n/10);

    if(n%10==0) return small+1;
    else return small;

}


