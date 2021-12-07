unordered_map<string,int> m;

    int solve(string s,int i,int j, bool istrue)
    {
        if(i>j)
        return 0;
        
        if(i==j)
        {
            if(istrue==true)
            return (s[i]=='T')?1:0;
            else
            return (s[i]=='F')?1:0;
        }
        
        string t=to_string(i)+" "+to_string(j)+" "+to_string(istrue);
        
        if(m.find(t)!=m.end())
        return m[t];
        
        int ans=0;
        
        for(int k=i+1;k<=j-1;k=k+2)
        {
            string r1=to_string(i)+" "+to_string(k-1)+" "+to_string(true);
            string r2=to_string(i)+" "+to_string(k-1)+" "+to_string(false);
            string v1=to_string(k+1)+" "+to_string(j)+" "+to_string(true);
            string v2=to_string(k+1)+" "+to_string(j)+" "+to_string(false);
            
            int lt,rt,lf,rf;
            
            if(m.find(r1)!=m.end())
                lt=m[r1];
            else
            {
                lt=solve(s,i,k-1,true);
                m[r1]=lt;
            }
            
            if(m.find(r2)!=m.end())
                lf=m[r2];
            else
            {
                lf=solve(s,i,k-1,false);
                m[r2]=lf;
            }
            
            if(m.find(v1)!=m.end())
                rt=m[v1];
            else
            {
                rt=solve(s,k+1,j,true);
                m[v1]=rt;
            }
            
            if(m.find(v2)!=m.end())
                rf=m[v2];
            else
            {
                rf=solve(s,k+1,j,false);
                m[v2]=rf;
            }
            
            
            if(s[k]=='&')
            {
                if(istrue)
                ans+=lt*rt;
                else
                ans+=lt*rf+rt*lf+lf*rf;
            }
            
            else if(s[k]=='|')
            {
                if(istrue)
                ans+=lt*rf+rt*lf+lt*rt;
                else
                ans+=lf*rf;
            }
            
            else if(s[k]=='^')
            {
                if(istrue)
                ans+=rt*lf+rf*lt;
                else
                ans+=rt*lt+rf*lf;
            }
        }
        
        return m[t]=ans%1003;
        
    }
    
    int countWays(int n, string s)
    {
        m.clear();
        return solve(s,0,n-1,true);
    }