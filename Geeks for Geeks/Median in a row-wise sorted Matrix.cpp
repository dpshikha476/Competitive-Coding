    int median(vector<vector<int>> &a, int r, int c)
    {
        int i,j,k=0,b[r*c],n=r*c;
        
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                b[k]=a[i][j];
                k++;
            }
        }
        
        sort(b,b+n);
        
        if(n%2==0)
        {
            return (b[n/2]+b[n/2 +1])/2;
        }
        else
        return b[n/2];
    }