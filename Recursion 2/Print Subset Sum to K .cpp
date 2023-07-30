
void printSubsetSumToK(int input[], int size, int k, int startIndex, int output[], int outputSize)
{
    if(startIndex >= size)
    {
        if(k == 0)
        {
            for(int i = 0; i < outputSize; i++)
            {
                
                  cout << output[i] << "  ";
                
            }
            cout << endl;
        }
        return;
    }

    printSubsetSumToK(input, size, k, startIndex+1, output, outputSize);
    output[outputSize] = input[startIndex];
    outputSize++;
    printSubsetSumToK(input, size, k - input[startIndex], startIndex+1, output, outputSize);

}

void printSubsetSumToK(int input[], int size, int k) {
    // Write your code here

    int output[1000];

    return printSubsetSumToK(input, size, k, 0, output, 0);

}
