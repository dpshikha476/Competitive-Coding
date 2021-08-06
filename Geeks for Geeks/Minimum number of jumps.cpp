    int minJumps(int a[], int n)
    {
        int i,j,l=0,r=0,m,flag=0,c=0;
        
        if(n==1)
        return 0;
        
        if(a[0]==0)
        return -1;
        
        while(r<n-1)
        {
            m=INT_MIN;
            
            for(i=l;i<=r;i++)
            {
                m=max(m,i+a[i]);
            }
            
            l=r+1;
            r=m;
            
            if(l>r)
            {
                flag=1;
                break;
            }
            
            c++;
            
        }
        
        if(flag==1)
        return -1;
        
        return c;
        
    }