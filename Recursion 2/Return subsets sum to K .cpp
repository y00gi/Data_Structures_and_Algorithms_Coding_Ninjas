/***
You need to save all the subsets in the given 2D output array. And return the number of subsets(i.e. number of rows filled in output) from the given function.

In ith row of output array, 1st column contains length of the ith subset. And from 1st column actual subset follows.
For eg. Input : {1, 3, 4, 2} and K = 5, then output array should contain
	{{2, 1, 4},	// Length of this subset is 2
	{2, 3, 2}}	// Length of this subset is 2

Don’t print the subsets, just save them in output.
***/
int subsetSumToK(int input[], int n, int output[][50], int k, int startIndex) {
	if(startIndex == n)
	{
		if(k == 0)
		{
			output[0][0] = 0;
			return 1;
		}
		else return 0;
	}

	int smallOutput1[1000][50];
	int smallAns1 = subsetSumToK(input, n, smallOutput1, k, startIndex+1);

	int smallOutput2[1000][50];
	int smallAns2 = subsetSumToK(input, n, smallOutput2, k-input[startIndex], startIndex+1);

	int row = 0;
	for(int i = 0; i < smallAns1; i++)
	{
		for(int j = 0; j < smallOutput1[i][0]; j++)
		{
			output[row][j] = smallOutput1[i][j];
		}
		row++;
	}

	for(int i = 0; i < smallAns2; i++)
	{
		output[row][0] = smallOutput2[i][0] + 1;
		output[row][1] = input[startIndex];

		for(int j = 1; j <= smallOutput2[i][0]; j++)
		{
			output[row][j+1] = smallOutput2[i][j];
		}
		row++;
	}

	return row;

}

int subsetSumToK(int input[], int n, int output[][50], int k) {
    // Write your code here

	return subsetSumToK(input, n, output, k, 0);

}
