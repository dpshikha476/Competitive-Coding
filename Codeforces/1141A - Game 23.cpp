 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,c=-1,d;
    cin>>n>>m;
    if(m%n==0)
    {
        d= m/n;
        c=0;
        
        while(d%2==0)
        {
            d=d/2;
            c++;
        }
        
        while(d%3==0)
        {
            d=d/3;
            c++;
        }
       if(d!=1)
       c=-1;
    }
    cout<<c;
}