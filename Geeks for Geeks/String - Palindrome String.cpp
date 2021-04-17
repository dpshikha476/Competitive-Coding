int isPlaindrome(string s)
{
    	int i,j;
        for(i=0,j=s.length()-1;i<s.length()/2;i++,j--)
        {
            if(s[i]==s[j])
            continue;
            else
            return 0;
        }
        return 1;
}
