#include<iostream>
using namespace std;

int main()
{
    char c;
    cin >> c;
    int a = c;
    if (64 < a && a < 91) {
        cout << 1 << endl;
    } else if (96 < a && a < 123) {
        cout << 0 << endl;
    } else {
        cout << -1 << endl;
    }
}