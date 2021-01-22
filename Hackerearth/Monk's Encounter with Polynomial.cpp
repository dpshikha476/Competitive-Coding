#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,a,b,c,ans,j,i,k;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>a>>b>>c>>k;
        for(j=0;j<100000000000;j++)
        {
            ans=a*j*j+b*j+c;
            if(ans>=k)
            break;
        }
        cout<<j<<"\n";
    }
}