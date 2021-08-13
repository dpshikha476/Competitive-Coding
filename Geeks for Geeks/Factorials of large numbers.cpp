vector<int> factorial(int n)
    {
        vector<int> v(10000,0);
        v[0]=1;
        int i,j,l=1,c=0,d,s;
        
        for(i=2;i<=n;i++)
        {
            for(j=0;j<l;j++)
            {
                s=i*v[j]+c;
                v[j]=s%10;
                c=s/10;
            }
            
            while(c)
            {
                v[l]=c%10;
                c=c/10;
                l++;
            }
            
        }
        
        vector<int> a;
        
        for(i=l-1;i>=0;i--)
        a.push_back(v[i]);
        
        return a;
        
        
    }