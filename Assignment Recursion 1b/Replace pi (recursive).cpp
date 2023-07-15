// Change in the given string itself. So no need to return or print anything
#include<cstring>

void replacePi(char input[]) {
	// Write your code here
	
    int size = strlen(input);
    if(size==0) return;

    if(input[0]=='p' && input[1]=='i')
    {
        for(int i=size-1; i>1; i--)
        {
            input[i+2] = input[i];
        }
        input[0] = '3';
        input[1] = '.';
        input[2] = '1';
        input[3] = '4';
    }

    replacePi(input+1);

}


