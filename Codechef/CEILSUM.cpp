#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t; 
    cin>>t;
    while(t--)
    {
        long int a,b;
        cin>>a>>b;
        
        if(a==b)
        cout<<0<<"\n";
        
        else if(a>b)
        {
            if((a-b)%2==0)
            cout<<(b-a)/2 +1<<"\n";
            else
            cout<<(b-a)/2<<"\n";
        }
        
        else
        {
            cout<<(b-a)/2 +1<<"\n";
        }
    }
    return 0;
}