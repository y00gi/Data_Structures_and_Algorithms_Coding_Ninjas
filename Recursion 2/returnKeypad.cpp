#include <string>
using namespace std;

int helper(int num, string key[], string output[])
{
    if(num==0)
    {
        output[0] = key[0];
        return 1;
    }

    int lastDigit = num%10;
    int smallNumber = num/10;
    string smallOutput[1000];

    int smallans = helper(smallNumber, key, smallOutput);
    int k =0;
    for(int i=0; i<key[lastDigit].length(); i++)
    {
        for(int j=0; j<smallans; j++)
        {
            output[k] = smallOutput[j] + key[lastDigit][i];
            k++;
        }
    }

    return k;

}

int keypad(int num, string output[]){
    /* Insert all the possible combinations of the integer number into the output string array. You do not need to
    print anything, just return the number of strings inserted into the array.
    */

    string key[] = { "", "", "abc", "def", "ghi" , "jkl", "mno", "pqrs", "tuv", "wxyz"};
    return helper(num, key, output);
}
