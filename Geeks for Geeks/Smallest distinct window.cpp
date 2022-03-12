string findSubString(string s)
    {
        int i,j,dc=0,c=0,n=s.length(),ans=INT_MAX;
        unordered_map<char,int> m;
        set<char> st;
        
        for(i=0;i<n;i++)
            st.insert(s[i]);
            
        dc=st.size();
        
        m[s[0]]++;
        c++;
        
        int x=-1,y=-1;
        i=0,j=1;
        while(i<=j && j<n)
        {
            if(c<dc)
            {
                if(m[s[j]]==0)
                    c++;
                m[s[j]]++;
                j++;
            }
            else if(c==dc)
            {
                if(ans>=j-i)
                {
                    ans=j-i;
                    x=i;
                    y=j;
                }
                if(m[s[i]]==1)
                    c--;
                m[s[i]]--;
                i++;
            }    
        }
        
        while(c==dc)
        {
            if(ans>=j-i)
            {
                ans=j-i;
                x=i;
                y=j;
            }
            if(m[s[i]]==1)
                c--;
            m[s[i]]--;
            i++; 
        }
      
        return s.substr(x,y-x);
    }