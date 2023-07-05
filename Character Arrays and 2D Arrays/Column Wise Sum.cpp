#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/

	int arr[10000][10000];

	int row;
	int col;
	cin >> row >> col;

	for(int i=0; i<row; i++)
	{
		for(int j=0; j<col; j++)
		{
			cin >> arr[i][j];
		}
	}

	for(int i=0; i<col; i++)
	{
		int sum = 0;
		for(int j=0; j<row; j++)
		{
			sum+=arr[j][i];
		}

		cout << sum << ' ';
	}
}


