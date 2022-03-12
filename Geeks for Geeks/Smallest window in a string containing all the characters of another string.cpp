string smallestWindow (string s, string p)
    {
        int i,j,k,n=s.length(),m=p.length(),count=0,x=-1,ans=INT_MAX;
        
        if(n<m)
        return "-1";
        
        int mp[256]={0};
        
        for(i=0;i<m;i++)
        {
            if(mp[p[i]]==0)
            count++;
            mp[p[i]]++;
        }

        j=0,i=0;
        
        while(i<n)
        {
            mp[s[i]]--;
                
            if(mp[s[i]]==0)
            count--;
            
            if(count==0)
            {
                while(count==0)
                {
                    int len=i-j+1;
                    if(ans>len)
                    {
                        ans=len;
                        x=j;
                    }

                    mp[s[j]]++;
                    if(mp[s[j]]>0)
                        count++;
                    j++;
                }
            }
            i++;
        }
        
        if(x==-1)
        return "-1";
        
        string str=s.substr(x,ans);
        return str;
    }