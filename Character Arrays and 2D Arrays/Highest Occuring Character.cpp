char highestOccurringChar(char input[]) {
    // Write your code here
    
    int str[256];
    for(int i=0; i<256; i++){
        str[i]=0;
    }
    
    for(int i=0; input[i]!='\0'; i++){
        str[input[i]]++;
    }
    
    int highest;
    int k=0;
    for(int i=0; i<256; i++){
        if(str[i]>k){
            k=str[i];
            highest=i;
        }
    }
    char c=highest;
    return c;
}