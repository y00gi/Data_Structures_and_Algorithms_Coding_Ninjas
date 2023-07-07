string getCompressedString(string &input) {
    // Write your code here.

    if(input.length()==0) return "";

    string res = "";
    res+=input[0];
    int count = 1;

    for(int i=1; i<input.size(); i++)
    {
       char curr = input[i];
       char prev = input[i-1];

       if(curr==prev)
       {
           count++;
       }
       else
       {
           if(count>1)
           {
               res+=to_string(count);
               count = 1;
           }
          res+=curr;
       }
     
    }

    if(count>1) return res+to_string(count);

    return res;
    

}