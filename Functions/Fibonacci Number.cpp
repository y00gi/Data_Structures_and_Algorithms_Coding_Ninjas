
bool checkMember(int n){

  /* Don't write main().
   * Don't read input, it is passed as function argument.
   * Return output and don't print it.
   * Taking input and printing output is handled automatically.
  */

    int a = 0;
    int b = 1;
    int c;

    while(a < n)
    {
        c = a+b;

        a = b;
        b = c;
    }

    return a == n;
}
