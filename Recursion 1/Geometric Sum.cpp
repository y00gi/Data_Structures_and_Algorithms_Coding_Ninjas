#include<cmath>

double geometricSum(int k) {
    // Write your code here

    if(k==0) return 1;

    return 1/pow(2, k) + geometricSum(k-1);



}


