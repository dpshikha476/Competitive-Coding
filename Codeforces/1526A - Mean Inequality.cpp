#include<bits/stdc++.h>
#include<unordered_set>
#include<string.h>
#include<vector>
using namespace std;
typedef long long int lli;

 
int main()
{
    lli t;
    cin>>t;
    while(t--)
    {
        lli n,i;
        cin>>n;
        lli a[2*n];
        for(i=0;i<2*n;i++)
        cin>>a[i];
        
        sort(a,a+(2*n));
        
        for(i=2;i<2*n;i=i+2)
        swap(a[i],a[i-1]);
        
        for(i=0;i<2*n;i++)
        cout<<a[i]<<" ";
        
        cout<<"\n";
    }
}
