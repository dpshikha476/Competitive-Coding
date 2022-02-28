int minDeletions(string s) 
    {
        unordered_map<int,char> m;
        int b[26]={0},ans=0;
        
        for(int i=0;i<s.length();i++)
        {
            b[s[i]-'a']++;
        }
        
        for(int i=0;i<26;i++)
        {
            if(b[i]!=0 && m.find(b[i])==m.end())
                m[b[i]]=i;
            else if(b[i]!=0)
            {
                bool flag=false;
                int x=b[i];
                while(x>0)
                {
                    if(m.find(x)==m.end())
                    {
                        m[x]=i;
                        flag=true;
                        break;
                    }
                    else
                    {
                        x--;
                        ans++;
                    }
                }
                if(x==0 && flag==false)
                    flag=true;
                
                if(flag==false)
                    return -1;
            }
        }
        
        return ans;
    }