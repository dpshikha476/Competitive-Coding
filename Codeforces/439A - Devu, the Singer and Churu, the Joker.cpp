#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,d,i,s=0;
    cin>>n>>d;
    int a[n];
    for(i=0;i<n;i++)
    cin>>a[i];
    sort(a,a+n);
    for(i=0;i<n;i++)
    {
        s=s+a[i]+10;
    }
    if(s-10 >d)
    cout<<-1;
    else
    {
        if(s<=d)
        cout<<n*2 + (d-s)/5;
        else if(s-5<=d)
        cout<<(n-1)*2+1;
        else if(s-10<=d)
        cout<<(n-1)*2;
    }
}