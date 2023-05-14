#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/

    int n;
    cin >> n;

    int i=1 ;
    while(i<=n)
    {
        int j=n-i;
        while(j>0)
        {
            cout << ' ';
            j--;
        }

        j=1;
        int k=i;
        while(j<=i)
        {
            cout << k;
            k++;
            j++;
        }

        j=1;
        k-=2;
        while(j<i)
        {
            cout << k;
            j++;
            k--;
        }





        i++;
        cout << endl;
    }
  
}


