 string solve(int c, int n,string s)
    {
        if(c==n)
            return s;
        
        string r="";
        for(int i=0;i<s.length();)
        {
            int j=i+1,cou=1;
            while(s[i]==s[j])
            {
                cou++;
                j++;
            }
            
            r=r+to_string(cou)+s[i];
            i=j;
        }
        s=r;
        return solve(c+1,n,s);
    }
    
    string countAndSay(int n) 
    {
        if(n==1)
            return "1";
        if(n==2)
            return "11";
        
        return solve(2,n,"11");
    }