int longestPalindrome(string str) 
    {
        int i,c=0,s=0,k=0;
        unordered_map<char,int> m;
        
        for(i=0;i<str.length();i++)
            m[str[i]]++;
        
        for(auto it=m.begin();it!=m.end();it++)
        {
            if(it->second==1)
                c++;
            
            if(it->second >1)
            {
                int n=it->second;
                if(n%2==0)
                    s+=n;
                else
                {
                    s+=n-1;
                    k+=1;
                }
            }
        }
        
        if(c==0 && k!=0 || c!=0)
            s++;
        
        return s;
        
    }