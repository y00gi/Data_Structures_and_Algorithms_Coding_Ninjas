#include <iostream>
#include <string>
using namespace std;

void helper(string input, string output)
{
    if(input.empty())
    {
        cout << output << endl;
        return;
    }
    
	for(int i = 0; i<= output.length(); i++)
	{
		helper(input.substr(1), output.substr(0, i) + input[0] + output.substr(i));
	}

}

void printPermutations(string input){

    	/* Don't write main() function.
	 * Don't read input, it is passed as function argument.
	 * Print output as specified in the question
	*/

    return helper(input, "");

}
