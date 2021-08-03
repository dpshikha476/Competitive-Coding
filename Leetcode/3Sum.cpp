    vector<vector<int>> threeSum(vector<int>& a) 
    {
        vector<vector<int>> v;
        
        if(a.size()<3)
            return v;
        
        int i,j,k,x;
        
        sort(a.begin(),a.end());
        
        for(i=0;i<a.size()-2;i++)
        {
            j=i+1;
            k=a.size()-1;
            x=-a[i];
            
            while(j<k)
            {
                if(a[j]+a[k]==x)
                {
                    v.push_back({a[i],a[j],a[k]});
                    while(j<k && a[j+1]==a[j])
                        j++;
                    while(k>j && a[k-1]==a[k])
                        k--;
                    
                    j++;
                    k--;
                }
                else if(a[j]+a[k]>x)
                k--;
                else if(a[j]+a[k]<x)
                j++;
                        
            }
            
            while(i+1<a.size() && a[i+1]==a[i])
                i++;
            
        }
        
        return v;
        
        
    }