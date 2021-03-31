#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
 
lli gcd(lli a, lli b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
 
lli sum(lli n)
{
    lli x=n,s=0;
    while(x!=0)
    {
        s=s+x%10;
        x=x/10;
    } 
    return s;
} 
 
int main()
{
    lli t;
    cin>>t;
    while(t--)
    {
        lli n,g,s,i;
        cin>>n;
       
        for(i=n;;i++)
        {
           s= sum(i);
           g= gcd(i,s); 
           if(g>1)
           break;
        }
       cout<<i<<"\n"; 
    }
}