ll findSubarray(vector<ll> a, int n ) 
    {
        ll i,ans=0,sum=0;
        unordered_map<int,int> m;
        m[0]=1;
        for(i=0;i<n;i++)
        {
            sum+=a[i];
            
            if(m.find(sum)!=m.end())
            ans+=m[sum];
            
            m[sum]++;
        }
        
        return ans;
    }