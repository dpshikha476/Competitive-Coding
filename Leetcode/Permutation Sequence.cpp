    int fact(int n)
    {
        int p=1;
        for(int i=2;i<=n;i++)
            p*=i;
        
        return p;
    }
    
    string getPermutation(int n, int k) 
    {
        vector<int> a;
        k=k-1;
        for(int i=1;i<=n;i++)
            a.push_back(i);
        
        int f=fact(n-1);
        string s="";
        
        while(true)
        {
            s+=to_string(a[k/f]);
            a.erase(a.begin()+k/f);
            if(a.size()==0)
                break;
            k=k%f;
            f=f/a.size();
        }
        
        return s;
    }