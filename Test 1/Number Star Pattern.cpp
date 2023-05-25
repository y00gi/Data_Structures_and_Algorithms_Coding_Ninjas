#include<iostream>
using namespace std;


int main(){

  // Write your code here

  int n;
  cin >> n;

  int numStars = 0;

  for(int row =1; row<=n; row++)
  {
        int value = 1;
        while(value<= n - row + 1)
        {
            cout << value;
            value++;
        }

        int star = 1;
        while(star<=numStars)
        {
            cout << '*';
            star++;
        }

        value--;
        while(value>=1)
        {
            cout << value;
            value--;
        }

        numStars+=2;
        cout << endl;
  }

}


