    int sb(int a[], int n, int x)
    {
        int i,s=0,e=0,ma=n+1,c=0;
        
        while(e<n)
        {
            while(c<=x && e<n)
            {
                c+=a[e++];
            }
            
            while(c>x && s<n)
            {
                if(e-s <ma)
                ma=e-s;
                c-=a[s++];
            }
        }
        

        return ma;
    }