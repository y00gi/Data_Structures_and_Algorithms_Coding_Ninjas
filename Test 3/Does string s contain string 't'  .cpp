bool checksequenece(char large[] , char*small) {

    if(small[0] == '\0') return true;

    if(large[0] == '\0' && small[0]!= '\0') return false;

    if(large[0] == small[0])
    {
        bool ans = checksequenece(large+1, small+1);
        return ans;
    }

    if(large[0] != small[0])
    {
        bool ans = checksequenece(large+1, small);
        return ans;
    }

}
