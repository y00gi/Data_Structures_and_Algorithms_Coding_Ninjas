int lastIndex(int input[], int size, int x) {
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Return output and don't print it.
     Taking input and printing output is handled automatically.
  */
	if(size==0){
        return -1;
    }
    
    
    
    int small = lastIndex(input+1, size-1, x);
    
    if(small != -1){
        return small+1;
    }
    if(input[0]==x){
        return 0;
    }
    
    return -1;
}
