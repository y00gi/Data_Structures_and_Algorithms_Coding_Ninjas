void removeAllOccurrencesOfChar(char input[], char c) {
    // Write your code here
    int n= strlen(input);
    int j=0;
    
    for(int i=0; i<n; i++){
        if(input[i]!=c){
            input[j]=input[i];
            j++;
        }
    }
        input[j]='\0';
        
}
