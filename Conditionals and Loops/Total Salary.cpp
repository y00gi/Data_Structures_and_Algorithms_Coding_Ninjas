#include <iostream>
#include <cmath> 
using namespace std;

int main()
{
    double basic;
    char grade;
    
    cin >> basic >> grade;

    double hra = basic * 0.20;
    double da = basic * 0.50;

    int allow;
    if(grade == 'A'){
        allow = 1700;
    }
    else if(grade == 'B')
    {
        allow = 1500;
    }
    else{
        allow = 1300;
    }

    double pf = basic * 0.11;

    int total = round(basic + hra + da + allow - pf);
    cout << total;

}