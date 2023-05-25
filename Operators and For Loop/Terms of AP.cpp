#include<iostream>
using namespace std;

int main() {
	// Write your code here

    int n;
    cin >> n;

    int count = 1;
	int num = 1;

	while(count<=n)
	{
		int k = 3 * num +2;
		if(k%4!=0)
		{
			cout << k << ' ';
			count++;
			
		}
		num++;
	}

}
