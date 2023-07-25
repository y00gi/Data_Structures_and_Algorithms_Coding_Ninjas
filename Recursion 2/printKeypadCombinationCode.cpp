#include <iostream>
#include <string>
using namespace std;

void helper(int num, string output, string key[])
{
    if(num==0)
    {
        cout << output << endl;
        return;
    }

    int lastDigit = num % 10;
    int i =0;
    while(i<key[lastDigit].length())
    {
        helper(num/10, key[lastDigit][i] + output, key);
        i++;
    }

    return;

}

void printKeypad(int num){
    /*
    Given an integer number print all the possible combinations of the keypad. You do not need to return anything just print them.
    */
   string key[] = { "", "", "abc", "def", "ghi" , "jkl", "mno", "pqrs", "tuv", "wxyz"}; 
   helper(num, "", key);
}
