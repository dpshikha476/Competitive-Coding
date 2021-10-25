vector<vector<int> > Solution::threeSum(vector<int> &a) 
{
    set<vector<int>> m;
    vector<vector<int> > v;
    sort(a.begin(),a.end());
    long long int i,j,k,n=a.size();

    for(k=0;k<n-2;k++)
    {
        i=k+1;
        j=n-1;
        while(i<j)
        {
            long long int sum=(long long int)a[k]+(long long int)a[i]+(long long int)a[j];
            if(sum==0)
            {
                m.insert({a[k],a[i],a[j]});
                i++;
                j--;
            }

            else if(sum>0)
            j--;
            else
            i++;

        }
    }

    for(auto it=m.begin();it!=m.end();it++)
    v.push_back(*it);

    return v;

}
