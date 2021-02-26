#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n,s,t;
        cin>>n>>s>>t;
        if(n==s && s==t)
        cout<<1<<"\n";
        else if(s+t == n)
        cout<<max(s,t)+1<<"\n";
        else if(s+t>n)
        {
           
           if(n-s > n-t)
           cout<<n-s+1<<"\n";
           else
           cout<<n-t+1<<"\n";
        }
    }
}
