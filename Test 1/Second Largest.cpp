#include<iostream>
using namespace std;
#include <climits>


int main(){
    
    // Write your code here

    int n;
    cin >> n;
    int max = INT_MIN, secondMax = INT_MIN;

    while(n--)
    {
        int curr;
        cin >> curr;

        if(curr>max)
        {
            secondMax = max;
            max = curr;
        }

        else if(curr>secondMax && curr != max)
        {
            secondMax = curr;
        }
    }

    cout << secondMax;
    
}


