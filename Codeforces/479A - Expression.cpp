#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,r,q,s,t,m,f;
    cin>>a>>b>>c;
    r=a*(b+c);
    q=a+(b*c);
    s=a*b*c;
    t=(a+b)*c;
    f=a+b+c;
    m=max(r,q);
    m=max(m,s);
    m=max(m,t);
    m=max(m,f);
    cout<<m;
    
}