
//#include<cstring>

bool helper(string& str, int start, int end)
{

    if(start>=end) return true;

    if(str[start] == str[end])
    {
        return helper(str, start+1, end-1);
    }

    return false;
}

bool isPalindrome(string& str) {
    // Write your code here.

    return helper(str, 0, str.length()-1);

}
