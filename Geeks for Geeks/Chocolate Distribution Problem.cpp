 long long findMinDiff(vector<long long> a, long long n, long long m)
    {
        long long i,ma=INT_MAX;
        sort(a.begin(),a.end());
        for(i=0;i<n-m+1;i++)
        {
            ma=min(ma, a[i+m-1]-a[i]);
        }
        
        return ma;
    }  