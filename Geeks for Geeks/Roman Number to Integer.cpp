   int integerformat(char c)
    {
        if(c=='I')
        return 1;
        
        if(c=='V')
        return 5;
        
        if(c=='X')
        return 10;
        
        if(c=='L')
        return 50;
        
        if(c=='C')
        return 100;
        
        if(c=='D')
        return 500;
        
        if(c=='M')
        return 1000;
        
    }
  
    int romanToDecimal(string &s) 
    {
        int i,ans,x;
        ans=integerformat(s[0]);
        
        for(i=1;i<s.length();i++)
        {
            x=integerformat(s[i]);
            
            if(x<=integerformat(s[i-1]))
            ans+=x;
            else
            {
                ans-=integerformat(s[i-1]);
                ans+=x-integerformat(s[i-1]);
            }
        }
        
        return ans;
        
    }