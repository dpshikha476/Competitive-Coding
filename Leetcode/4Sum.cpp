    vector<vector<int>> fourSum(vector<int>& a, int t) 
    {
        int i,j,k,l,n=a.size(),x;
        vector<vector<int>> v;
        
        sort(a.begin(),a.end());
        
        for(i=0;i<n-3;i++)
        {
            for(j=i+1;j<n-2;j++)
            {
                k=j+1;
                l=n-1;
                x=t-(a[i]+a[j]);
                    
                while(k<l)
                {
                    if(a[k]+a[l]==x)
                    {
                        v.push_back({a[i],a[j],a[k],a[l]});
                        
                        while(k<l && a[k+1]==a[k])
                            k++;
                        
                        while(l>k && a[l-1]==a[l])
                            l--;
                        
                        k++;
                        l--;
                    }
                    
                    else if(a[k]+a[l]>x)
                        l--;
                    else
                        k++;
                            
                }
                
                while(j<n-2 && a[j+1]==a[j])
                    j++;
             
            }
            
            while(i<n-3 && a[i+1]==a[i])
                i++;
            
        }
        
        return v;
        
    }