#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long x,y;
        cin>>x>>y;
        if(x==1)
        {
            if(y==1)
            cout<<"YES"<<"\n";
            else
            cout<<"NO"<<"\n";
        }
        else if(x==2 || x==3)
        {
            if(y<4)
            cout<<"YES"<<"\n";
            else
            cout<<"NO"<<"\n";
        }
        else
        cout<<"YES"<<"\n";
    
    }
}