#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i,a[12]={4,7,47,74,447,474,477,444,744,747,774,777},d=0;
    cin>>n;
    for(i=0;i<12;i++)
    {
        if(n%a[i]==0)
        {
            cout<<"YES"<<"\n";
            d=1;
            break;
        }
    }
    if(d==0)
    cout<<"NO"<<"\n";
    
}