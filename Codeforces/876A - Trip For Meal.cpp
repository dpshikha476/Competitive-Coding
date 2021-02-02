#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,a,b,c;
    cin>>n>>a>>b>>c;
    if(n==1)
    cout<<0;
    else
    {
        if(min(min(b,c),a)==a ||min(min(b,c),a)==b)
        {
            cout<<min(a,b)*(n-1);
        }
        else
        cout<<min(a,b)+c*(n-2);
    }
}