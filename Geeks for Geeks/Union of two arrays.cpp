    int doUnion(int a[], int n, int b[], int m)  
    {
        long long int ar[100001]={0},c=0,i;
        
        for(i=0;i<n;i++)
        {
            if(ar[a[i]]==1)
            continue;
            else
            {
                ar[a[i]]=1;
                c++;
            }
        }
        
        for(i=0;i<m;i++)
        {
            if(ar[b[i]]==1)
            continue;
            else
            {
                ar[b[i]]=1;
                c++;
            }
        }
        
        return c;
        
    }