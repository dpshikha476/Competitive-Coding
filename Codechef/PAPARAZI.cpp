#include<bits/stdc++.h>
#include<vector>
using namespace std;

long long int solve(long long int n, long long int a[])
{

    if(n<=2)
    return 1;
    
    long long int i=0,ans=1,l;
    
    vector< pair <long long int,long long  int> > v; 
    vector< pair <long long int,long long  int> > b;
    
    for(i=0;i<n;i++)
    {
         v.push_back( make_pair(i+1,a[i])); 
    } 
    b.push_back(v[0]);
    b.push_back(v[1]);
    
    l=b.size();
    for(i=2;i<n;i++)
    {
        while(b.size()>=2)
        {
           double s1=((double)b[l-1].second-(double)b[l-2].second)/((double)b[l-1].first-(double)b[l-2].first);
           double s2=((double)v[i].second-(double)b[l-1].second)/((double)v[i].first-(double)b[l-1].first);
            if(s1<=s2)
            {
                b.pop_back();
                l--;
            }
            else
            break;
        }
         b.push_back(v[i]);
         l++;
        ans= max(ans,(b[l-1].first-b[l-2].first));    
    }
    
    return ans;
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n,i,ans;
        cin>>n;
        long long int a[n];
        for(i=0;i<n;i++)
        cin>>a[i];
        ans= solve(n,a);
        cout<<ans<<"\n";
    }
    
}
