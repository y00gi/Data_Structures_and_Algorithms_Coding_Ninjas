void trimSpaces(char input[]) {
    // Write your code here

    int j = 0;

    for(int i=0; input[i]!='\0'; i++)
    {
        if(input[i]!=' ')
        {
            input[j++] = input[i];
        }
    }

    input[j] = '\0';

}