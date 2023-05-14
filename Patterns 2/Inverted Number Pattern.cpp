#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/

    int n;
    cin >> n;

    int i=0;
    while(i<n)
    {
        int j=0;
        
        while(j<n-i)
        {
            cout << n-i;
            j++;
        }
        cout << endl;
        i++;
    }
  
}


