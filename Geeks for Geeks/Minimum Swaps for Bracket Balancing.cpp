int minimumNumberOfSwaps(string s)
    {
        int i,o=0,c=0,f=0,ans=0;
        
        for(i=0;i<s.length();i++)
        {
            if(s[i]==']')
            {
                c++;
                f=c-o;
            }
            else
            {
                o++;
                if(f>0)
                {
                    ans+=f;
                    f--;
                }
            }
        }
        
        return ans;
    }