 int wordBreak(string a, vector<string> &b) 
    {
        int n=a.length();
        
        int t[n+1];
        memset(t, 0, sizeof(t));
        t[0]=1;
        
        for(int i=1;i<=n;++i)
        {
            for(int j=0;j<i;++j)
            {
                if(t[j])
                {
                    string s=a.substr(j,i-j);
                    auto it=find(b.begin(),b.end(),s);
                    if(it!=b.end())
                    {
                        t[i]=1;
                        break;
                    }
                }
                
            }
        }
        
        return t[n];
        
    }