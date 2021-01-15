#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,a,b,d=0,i;
    cin>>t;
    long long int g[t][t];
    for(i=0;i<t;i++)
    {
        cin>>a>>b;
        g[i][0]=a;
        g[i][1]=b;
        if(a!=b)
        {
            cout<<"rated";
            d=1;
            break;
        }
    }
    if(d==0)
    {
        for(i=1;i<t;i++)
        {
            if(g[i-1][0]<g[i][0])
            {
                 cout<<"unrated";
                 d=1;
                 break;
            }
        }
    }
    if(d==0)
    cout<<"maybe";
   
}