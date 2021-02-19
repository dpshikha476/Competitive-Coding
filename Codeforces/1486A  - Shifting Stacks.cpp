#include<bits/stdc++.h>
using namespace std;
bool solve(long long int n, long long int a[])
{
    long long int i,s=0,f=0;
    for(i=0;i<n;++i)
    {
        s=s+a[i];
        f=f+i;
        if(f >s)
        return false;
    }
    return true;
}
 
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n,i;
        cin>>n;
        long long int a[n];
        for(i=0;i<n;++i)
            cin>>a[i];
        if(solve(n, a))
        cout<<"YES"<<"\n";
        else
        cout<<"NO"<<"\n";
    }
}