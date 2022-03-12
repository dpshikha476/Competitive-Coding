 vector<int> nextPermutation(int n, vector<int> a)
    {
        int i=n-2,j;
        
        while(i>=0 && a[i+1]<=a[i])
        i--;
        
        if(i>=0)
        {
            j=n-1;
            
            while(j>=0 && a[j]<=a[i])
            j--;
            
            swap(a[j],a[i]);
        }
        
        reverse(a.begin()+i+1,a.end());
        
        return a;
    }