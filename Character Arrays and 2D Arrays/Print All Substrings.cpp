void printSubstrings(char input[]) {
    // Write your code here
    int len=strlen(input);
    
 	for(int m=0; m<len; m++){
        for(int i=m; i<len; i++){

            for(int j=m; j<=i; j++){
                cout << input[j];
            }
            cout << endl;
        }
    }
}