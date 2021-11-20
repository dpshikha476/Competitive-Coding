string addBinary(string a, string b) 
    {
        string r="";
        int i,j,n=a.length(),m=b.length(),c=0,s=0;
        
        for(i=n-1,j=m-1;i>=0 && j>=0; i--,j--)
        {
            s=(a[i]-'0') + (b[j]-'0')+c;
            c=s/2;
            r=r+to_string(s%2);
        }
        
        while(i>=0)
        {
            s=(a[i]-'0')+c;
            c=s/2;
            r=r+to_string(s%2);
            i--;
        }
        
        while(j>=0)
        {
            s=(b[j]-'0')+c;
            c=s/2;
            r=r+to_string(s%2);
            j--;
        }
        
        if(c!=0)
            r=r+to_string(c);
        
        reverse(r.begin(),r.end());
        
        return r;
        
    }