bool isPermutation(char input1[], char input2[]) {
    // Write your code here

    int freq[256];
    for(int i=0;i<256;i++)
    {
        freq[i]=0;
    }
    for(int i=0;input1[i]!='\0';i++)
    {
        freq[input1[i]]++;
    }
    for(int i=0;input2[i]!='\0';i++)
    {
        freq[input2[i]]--;
    }
    for(int i=0;i<256;i++)
    {
        if(freq[i]!=0)
            return false;
    }
    return true;
}