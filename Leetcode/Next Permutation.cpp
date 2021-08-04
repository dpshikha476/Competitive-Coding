 void nextPermutation(vector<int>& a) 
    {
        int i,n=a.size(),j,x,m=INT_MAX,k;

        i=n-2;
        
        while(i>=0 && a[i+1]<=a[i])
            i--;
        
        if(i>=0)
        {
            j=n-1;
            
            while(a[j]<=a[i])
                j--;
            
            swap(a[i],a[j]);
        }
        
            
            reverse(a.begin()+i+1,a.end());
            
    }