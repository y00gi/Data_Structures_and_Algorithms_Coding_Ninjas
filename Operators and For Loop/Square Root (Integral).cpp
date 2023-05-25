#include<iostream>
using namespace std;

int main() {
	// Write your code here
    
    int num;
    cin >> num;
    int pow = 0;

    while(pow * pow <= num)
    {
        pow++;
    }

    cout << pow-1;
    

}
