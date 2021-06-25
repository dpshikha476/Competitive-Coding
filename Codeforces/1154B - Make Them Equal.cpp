
#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

lli solve(vector<lli> b, lli n)
{
    if(n==1)
    return 0;
    if(n==2)
    {
       if((b[0]+b[1])%2==0)
       return b[1] - (b[0]+b[1])/2;
       else
       return b[1]-b[0];   
    }
    
    if(n>3)
    return -1;
    
    if(b[2]-b[1]==b[1]-b[0])
    return b[2]-b[1];
    else
    return -1;

}
int main()
{
    lli n,i;
    cin>>n;
    lli a[n];
    for(i=0;i<n;i++)
    cin>>a[i];
    
    vector<lli> b;
    for(i=0;i<n;i++)
    {
        if(find(b.begin(),b.end(),a[i])==b.end())
        b.push_back(a[i]);
    }
    
    sort(b.begin(),b.end());
    
    cout<<solve(b,b.size())<<"\n";
    
    return 0;
}
