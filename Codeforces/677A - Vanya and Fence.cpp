#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,h,i,s=0;
    cin>>n>>h;
    long long int a[n];
    for(i=0;i<n;i++)
    cin>>a[i];
    for(i=0;i<n;i++)
    {
        if(a[i]>h)
        s=s+2;
        else
        s++;
    }
    cout<<s;
}