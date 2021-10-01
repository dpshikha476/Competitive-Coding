    string multiply(string s, string r) 
    {
        string ans="";
        
        if(r=="0" || s=="0")
            return "0";
        
        int i,j,k,n=s.length(),m=r.length(),c=0,p;
        vector<int> v(n+m,0);
        
        for(i=m-1;i>=0;i--)
        {
            for(j=n-1;j>=0;j--)
            {
                v[i+j+1]+=(r[i]-'0')*(s[j]-'0');
            }
            
            for(k=v.size()-1;k>0;k--)
            {
                int x=v[k];
                v[k]=x%10;
                v[k-1]+=x/10;
            }
            
        }
        
        i=0;
        while(i<v.size()&& v[i]==0)
            i++;
        
        while(i<v.size())  
        {
            ans+=(v[i]+'0');
            i++;
        }
        
        return ans;
    
    }