#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/

    int n;
    cin >> n;

    int i=1 ;
    while(i<=n/2 + 1)
    {
        int j=1;
        while(j<=n/2+1 - i)
        {
            cout << ' ';
            j++;
        }

        j=1;
        while(j<=(2*i-1))
        {
            cout << '*';
            j++;
        }
        i++;
        cout << endl;
    }
  
    i=1;
     while(i<=n/2)
    {
        int j=1;
        while(j<=i)
        {
            cout << ' ';
            j++;
        }

        j = 2*(n/2 - i);
        while(j>=0)
        {
            cout << '*';
            j--;
        }

        i++;
        cout << endl;
    }

}


