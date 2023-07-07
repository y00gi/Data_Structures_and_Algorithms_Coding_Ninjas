/* input - Input String
*  output - Save the result in the output array (passed as argument). You don’t have to 
*  print or return the result
*/

#include<cstring>

void minLengthWord(char input[], char output[]){
		
	// Write your code here	
	int len = strlen(input);
	int si = 0; 
	int ei = 0;
	int min_length = len;
	int min_start_idx = 0;

	while(ei<=len)
	{
		if(input[ei]==' ' || input[ei] == '\0')
		{
			int curr_len = ei-si;
			if(curr_len<min_length)
			{
				min_length = curr_len;
				min_start_idx = si;
				
			}

			si = ei+1;

		}


		ei++;
	}


	for(int i=0; i<min_length; i++)
	{
		output[i] = input[min_start_idx++];
	}

}


