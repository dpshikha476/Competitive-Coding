
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,a,x,b,y,d=0;
    cin>>n>>a>>x>>b>>y;
    while(a!=x && b!=y)
    {
        if(a==n)
        a=1;
        else
        a++;
        if(b==1)
        b=n;
        else
        b--;
        if(a==b)
        {
            d=1;
            cout<<"YES";
            break;
        }
    }
    if(d==0)
    cout<<"NO";
}