vector<int> candyStore(int c[], int n, int k)
    {
        int i=0,j=n-1,minc=0,maxc=0;
        sort(c,c+n);
        
        
        while(i<=j)
        {
            minc+=c[i];
            i++;
            j-=k;
        }
        
        i=0,j=n-1;
        
        while(j>=i)
        {
            maxc+=c[j];
            j--;
            i+=k;
        }
        
        return {minc,maxc};
    }