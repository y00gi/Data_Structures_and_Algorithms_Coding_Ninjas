#include<iostream>
using namespace std;

int main(){

    int n;
    cin >> n;
    int odd = 0;
    int even = 0;

    while(n>0)
    {
        int rem = n%10;
        n = n/10;
        if(rem%2==0){
            even+=rem;
        }else{
            odd+=rem;
        }
    }

    cout << even << ' ' << odd;
}