
#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;


int main()
{
    lli t;
    cin>>t;
    while(t--)
    {
        lli n,i,j,c=0;
        cin>>n;
        lli a[n];
        vector<pair<lli,lli>> v;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            v.push_back({a[i],i+1});
        }
        
        sort(a,a+n);
        sort(v.begin(),v.end());

        for(i=0;i<n && a[i]*a[i]<=2*n;i++)
        {
            for(j=i+1;j<n && a[i]*a[j]<=2*n;j++)
            {
                if(a[i]*a[j]==v[i].second+v[j].second)
                c++;
            }
            
        }
        
        cout<<c<<"\n";
        
    }
    
    return 0;
}
