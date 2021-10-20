string Solution::countAndSay(int n) 
{
    string s="1";
    if(n==1)
    return "1";

    for(int k=2;k<=n;k++)
    {
        string r="";
        int c=0,i=0,j=0;

        while(i<=j && j<s.length())
        {
            if(s[i]==s[j])
            {
                c++;
                j++;
            }
            else
            {
                r+=to_string(c)+s[i];
                i=j;
                c=0;
            }
        }
        
        r+=to_string(c)+s[i];
        s=r;
        
    }
    return s;

}
