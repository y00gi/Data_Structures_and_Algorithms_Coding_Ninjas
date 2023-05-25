#include<iostream>
using namespace std;

int main() {
	// Write your code here

    int num;
    cin >> num;

    long binary = 0;
    long pow = 1;

    while(num>0)
    {
        int rem = num%2;

        binary+= rem * pow;

        pow*=10;


        num/=2;
    }

    cout << binary;
	
}
