#include<bits/stdc++.h>
using namespace std;
long long int solve(long long int m)
{
    long long int d,a1=0,c=1;
       while(m!=0)
    {
        d=m%10;
        if(d!=0)
        {
            a1=a1+d*c;
            c=c*10;
            
        }
        m=m/10;
    } 
    
    return a1;
}
 
int main()
{
    long long  a,b,n,y,z,x;
    cin>>a>>b;
    n=a+b;
    x= solve(a);
    y= solve(b);
    z= solve(n);
 
    if(x+y == z)
    cout<<"YES"<<"\n";
    else
    cout<<"NO"<<"\n";
    
}