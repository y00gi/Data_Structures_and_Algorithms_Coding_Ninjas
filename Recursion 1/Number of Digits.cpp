int countDigits(int n){
	// Write your code here.	

    if(n==0) return 0;

    int small = countDigits(n/10);
    return small+1;

}