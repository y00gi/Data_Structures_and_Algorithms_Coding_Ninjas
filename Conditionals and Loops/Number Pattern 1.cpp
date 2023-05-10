#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
	int n;
	cin >> n;

	int i=1, j, k;
	while(i<=n){
			k=i;
			j=1;
			while(j<=i){
				cout << k;
				j++;
				k++;
			}
			cout << endl;
			i++;
	}

}


