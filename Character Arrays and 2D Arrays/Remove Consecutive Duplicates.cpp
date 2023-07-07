void removeConsecutiveDuplicates(char input[]) {
    // Write your code here

    int size = strlen(input);
    int idx = 0;
    //input[idx] = input[0];
    
    for(int i=0; i<size; i++)
    {
        if(input[idx]!=input[i])
        {
            idx++;
            input[idx] = input[i];
        }
        
    }
    idx++;
    input[idx] = '\0';

}