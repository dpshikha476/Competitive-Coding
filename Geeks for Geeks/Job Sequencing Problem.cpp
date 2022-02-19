    static bool cmp(Job a, Job b)
    {
        return a.profit>b.profit;
    }
    
    vector<int> JobScheduling(Job a[], int n) 
    { 
        sort(a,a+n,cmp);
        
        int v[n+1]={0};
        int c=0, sum=0;
        
        for(int i=0;i<n;i++)
        {
            int d=a[i].dead;
            
            for(int j=min(n,d-1);j>=0;j--)
            {
                if(v[j]==0)
                {
                    v[j]=1;
                    sum+=a[i].profit;
                    c++;
                    break;
                }
            }
        }
        
        return {c,sum};
        
    }