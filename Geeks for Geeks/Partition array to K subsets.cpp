    void solve(int cursum,int count,int n,int k,int sum,vector<int> &vis,int a[],bool &ans)
    {
        if(count==k-1)
        {
            ans=true;
            return;
        }
        
        if(cursum>sum)
        return;
        
        if(cursum==sum)
        {
            solve(0,count+1,n,k,sum,vis,a,ans);
            if(ans==true)
            return;
        }
        
        for(int i=0;i<n;i++)
        {
            if(vis[i]==0)
            {
                vis[i]=1;
                solve(cursum+a[i],count,n,k,sum,vis,a,ans);
                if(ans==true)
                return;
                vis[i]=0;
            }
        }
    }
  
    bool isKPartitionPossible(int a[], int n, int k)
    {
        bool ans=false;
        vector<int> vis(n,0);
        
        if(k>n)
        return false;
        
        if(k==1)
        return true;
        
        int sum=0;
        
        for(int i=0;i<n;i++)
        sum+=a[i];
        
        if(sum%k!=0)
        return false;
        
        solve(0,0,n,k,sum/k,vis,a,ans);
        
        return ans;
    }