#include <iostream>
using namespace std;

int main()
{
    char c;
    c=cin.get();
    int word=0;
    int num=0;
    int space=0;
    for(; c!='$'; ){
        
        if(c>=97 && c<=122){
            word++;
        }
        else if(48<=c && 57 >=c){
            num++;
        }
        else {space++;}
        c=cin.get();
    }
        cout << word << " " << num << " " << space << endl;

}
