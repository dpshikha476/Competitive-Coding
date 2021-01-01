#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int a[3],i;
        for(i=0;i<3;i++)
        cin>>a[i];
        sort(a,a+3);
        if(a[1]!=a[2])
        cout<<"NO"<<"\n";
        else
        cout<<"YES"<<"\n"<<a[0]<<" "<<a[0]<<" "<<a[2]<<"\n";
        
    }
}