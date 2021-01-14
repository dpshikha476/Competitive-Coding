#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i,c,s=0;
    cin>>n;
    long long int a[n],b[n];
    for(i=0;i<n;i++)
    cin>>a[i];
    for(i=0;i<n;i++)
    cin>>b[i];
    sort(b,b+n);
    c=b[n-1]+b[n-2];
    for(i=0;i<n;i++)
    {
        s=s+a[i];
    }
    if(s<=c)
    cout<<"YES";
    else
    cout<<"NO";
}