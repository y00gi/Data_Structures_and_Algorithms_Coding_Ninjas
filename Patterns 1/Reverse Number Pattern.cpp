#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/

    int n;
    cin >> n;

    int i=1;
    while(i<=n)
    {
        int j=0;
        int k=i;
        while(j<i)
        {
            cout << k;
            k--;
            j++;
        }

        i++;
        cout << endl;
    }
  
}


