int Solution::isPalindrome(int A) 
{
    string s=to_string(A);

    for(int i=0,j=s.length()-1;i<s.length()/2;i++,j--)
    {
        if(s[i]!=s[j])
        return 0;
    }

    return 1;
}