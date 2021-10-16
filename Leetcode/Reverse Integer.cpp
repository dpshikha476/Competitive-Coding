int reverse(int x) 
    {
        if(x==0)
            return 0;
        
        int i=0,j,f=1;
        long ans=0;
        
        string s=to_string(x);
        
        if(s[0]=='-' || s[0]=='+')
        {
            if(s[0]=='-')
                f=-1;
            
            i++;
        }
        
        j=s.length()-1;
        
        while(j>=i && s[j]=='0')
            j--;
        
        for(;j>=i;j--)
        {
            ans=ans*10+s[j]-'0';
            
            if(ans*f<INT_MIN || ans*f>INT_MAX)
                return 0;
        }
        
        return ans*f;
    }