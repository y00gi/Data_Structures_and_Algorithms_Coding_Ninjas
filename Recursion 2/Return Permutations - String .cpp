#include <string>
using namespace std;

int returnPermutations(string input, string output[]){
   	/* Don't write main() function.
	 * Don't read input, it is passed as function argument.
	 * Print output as specified in the question
	*/

    if(input.empty())
    {
        output[0] = "";
        return 1;
    }

    string smallOutput[10000];
    int size = returnPermutations(input.substr(1), smallOutput);

    int k = 0;
    for(int i = 0; i< size; i++)
    {
        for(int j = 0; j<= smallOutput[i].length(); j++)
        {
            output[k] = smallOutput[i].substr(0, j) + input[0] + smallOutput[i].substr(j);
            k++;
        }
    }

    return k;

}
