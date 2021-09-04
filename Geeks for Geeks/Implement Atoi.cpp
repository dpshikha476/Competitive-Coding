int atoi(string s) 
    {
        int n=0,i,flag=0;
        
        for(i=0;i<s.length();i++)
        {
            if(s[i]=='-')
            flag=1;
            
            else if(s[i]-'0'>=0 && s[i]-'0'<=9)
            n=n*10+(s[i]-'0');
            
            else
            return -1;
        }
        
        if(flag==1)
        n=-(n);
        
        return n;
    }