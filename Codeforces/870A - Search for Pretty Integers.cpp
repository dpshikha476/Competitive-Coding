#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m;
    cin>>n>>m;
    long long int a[n],b[m],i,j,d=0;
    for(i=0;i<n;i++)
    cin>>a[i];
    for(i=0;i<m;i++)
    cin>>b[i];
    sort(a,a+n);
    sort(b,b+m);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(a[i]==b[j])
            {
                cout<<a[i];
                d=1;
                break;
            }
        }
        if(d==1)
        break;
    }
    if(d==0)
    {
        if(a[0]<b[0])
        cout<<a[0]*10+b[0];
        else {
        cout<<a[0]+b[0]*10;
        }
    }
}