#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/

	int n;
	cin >> n;

	int i =1;
	int j, k;

	while(i<=n){
		j=i;
		while(n-j>0){
			cout << " ";
			j++;
		}

		j=1;
		while(j<=i){
			cout << '*';
			j++;
		}

		j=2;
		while(j<=i){
			cout << '*';
			j++;
		}

		cout << endl;

		i++;
	}

  
}


