bool checkNumber(int input[], int size, int x) {
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Return output and don't print it.
     Taking input and printing output is handled automatically.
  */

    if(size == 1) return input[0]==x;

    bool small = checkNumber(input, size-1, x);

    return small || input[size-1]==x;

}
