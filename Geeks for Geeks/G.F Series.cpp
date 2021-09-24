void gfSeries(int n)
    {
        if(n==1)
        cout<<0;
        if(n==2)
        cout<<0<<" "<<1<<" ";
        
        else
        {
            long i,a[n];
            a[0]=0;
            a[1]=1;
            
            for(i=2;i<n;i++)
            {
                a[i]=(a[i-2]*a[i-2])-a[i-1];
            }
            
            for(i=0;i<n;i++)
            cout<<a[i]<<" ";
        }
        
        cout<<"\n";
        
        
    }