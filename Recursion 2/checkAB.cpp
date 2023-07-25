bool helper(char input[], int start)
{
    if(input[start] == '\0') return true;

    if(input[start] != 'a') return false;
    if(input[start+1] != '\0' && input[start+2] != '\0')
    {
        if(input[start+1] == 'b' && input[start+2] == 'b')
        {
            return helper(input, start+3);
        }
    }
	return helper(input, start+1);
}

bool checkAB(char input[]) {
	// Write your code here

    return helper(input, 0);

}

