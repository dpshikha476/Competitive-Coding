#include<bits/stdc++.h>
#include<string.h>
using namespace std;
typedef long long int lli;

long long int lcm(lli a, lli b)
{
    lli m,n;

    m=a;
    n=b;

    while(m!=n)
    {
        if(m < n)
        {
            m=m+a;
        }
        else
        {
            n=n+b;
        }
    }
    
    return m;
}


int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        string s,r;
        cin>>s>>r;
        lli l1,l2,m,l;
        
        l1=s.length();
        l2=r.length();
        
        string a=s,b=r;
        l=l1;
        
        m= lcm(l1,l2);
        l1=m/l1;
        l2=m/l2;
        while(--l1)
        {
            s=s+a;
        }
        while(--l2)
        {
            r=r+b;
        }
        
        if(s==r)
        cout<<s<<"\n";
        else
        cout<<-1<<"\n";
    }
}
