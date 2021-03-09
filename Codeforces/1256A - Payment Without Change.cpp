#include<bits/stdc++.h>
using namespace std;
bool solve(long long int a, long long int b, long long int n, long long int s)
{
    long long int x=0,y=0;
 
        x= s/n;
        if(x>a)
        {
            y=(x-a)*n+ s%n;
            if(y>b)
            return false;
            else
            return true;
        }
        else
        {
            y=s%n;
            if(y>b)
            return false;
            else
            return true;
        }
}
 
int main()
{
    long long int q;
    cin>>q;
    while(q--)
    {
        long long int a,b,n,s;
        cin>>a>>b>>n>>s;
        
        if(solve(a,b,n,s))
        cout<<"YES"<<"\n";
        else
        cout<<"NO"<<"\n";
    }
}