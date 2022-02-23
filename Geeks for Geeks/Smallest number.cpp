 string smallestNumber(int s, int d)
    {
        int p[d]={0},i;
        p[0]=1;
        s--;
        
        for(i=d-1;i>0;i--)
        {
            if(s-9>=0)
            {
                p[i]=9;
                s-=9;
            }
            else
            {
                p[i]+=s;
                s=0;
            }
        }
        
        if(i==0 && s>=9)
            return "-1";
        else
            p[0]+=s;
        
        string ans="";
        
        for(i=0;i<d;i++)
            ans+=to_string(p[i]);
            
        return ans;
    }