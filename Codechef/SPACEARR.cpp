#include<bits/stdc++.h>
using namespace std;

int solve(long long int n, long long int a[])
{
    long long int i,s=0;
    sort(a,a+n);
    
    for(i=0;i<n;i++)
    {
        if(a[i]>i+1)
        return 2;
    }
    
    for(i=0;i<n;i++)
    {
        s= abs(a[i]-(i+1))+s;
    }
    
    if(s%2==0)
    return 2;
    else
    return 1;
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
        long long int n,i;
        cin>>n;
        long long int a[n];
        for(i=0;i<n;i++)
        cin>>a[i];
        int c=solve(n,a);
        if(c==1)
        cout<<"First"<<"\n";
        else
        cout<<"Second"<<"\n";
    }
    
}
