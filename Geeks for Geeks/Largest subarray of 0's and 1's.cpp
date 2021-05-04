    int maxLen(int a[], int n)
    {
        int i,s=0,m=0;
        unordered_map<int, int> v;
        for(i=0;i<n;i++)
        {
            if(a[i]==0)
            s+=-1;
            else
            s+=1;
            
            if(s==0)
            m= max(m,i+1);
            
            if (v.find(s) == v.end())
            v[s]=i;
            else
            m= max(m,i-(v.find(s)->second));
        }
        
        return m;
    }