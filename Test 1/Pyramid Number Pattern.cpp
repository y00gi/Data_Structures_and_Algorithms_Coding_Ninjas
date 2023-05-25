#include<iostream>
using namespace std;

int main(){

  // Write your code here  
    int n;
    cin >> n;

    for(int row = 1; row<=n; row++)
    {
        int space = n-row;
        while(space>0)
        {
            cout << ' ';
            space--;
        }

        int value = row;
        while(value>1)
        {
            cout << value;
            value--;
        }

        while(value<=row)
        {
            cout << value;
            value++;
        }

        cout << endl;
    }
  
}

