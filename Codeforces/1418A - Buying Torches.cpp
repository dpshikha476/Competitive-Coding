#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int x,y,k,s,d;
        cin>>x>>y>>k;
               
        s= k+y*k;   
             
        d= (s+x-3)/(x-1);

        cout<<d+k<<"\n";
    }
}