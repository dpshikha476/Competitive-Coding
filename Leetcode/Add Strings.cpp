 string addStrings(string a, string b) 
    {
        int i,j,c=0,s=0,n=a.length(),m=b.length();
        string r="";
        
        for(i=n-1,j=m-1;i>=0 && j>=0;i--,j--)
        {
            s=(a[i]-'0')+(b[j]-'0')+c;
            c=s/10;
            s=s%10;
            r+=to_string(s);
        }
        
        for(;i>=0;i--)
        {
            s=(a[i]-'0')+c;
            c=s/10;
            s=s%10;
            r+=to_string(s);
        }
        
        for(;j>=0;j--)
        {
            s=(b[j]-'0')+c;
            c=s/10;
            s=s%10;
            r+=to_string(s);
        }
        
        if(c!=0)
        r+=to_string(c);
        reverse(r.begin(),r.end());
        
        return r;
        
    }