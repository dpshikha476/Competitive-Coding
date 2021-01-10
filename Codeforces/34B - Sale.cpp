#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,i,s=0;
    cin>>n>>m;
    long long int a[n];
    for(i=0;i<n;i++)
    cin>>a[i];
    sort(a,a+n);
    for(i=0;i<m;i++)
    {
        if(a[i]<0)
        s=s+a[i];
    }
    cout<<abs(s);
}