#include<bits/stdc++.h>
#include<unordered_set>
#include<string.h>
#include<vector>
using namespace std;
typedef long long int lli;
 
 
int main()
{
    lli t;
    cin>>t;
    while(t--)
    {
        lli a[4],m1,m2;
        cin>>a[0]>>a[1]>>a[2]>>a[3];
        
        m1=max(a[0],a[1]);
        m2=max(a[2],a[3]);
        
        sort(a,a+4);
        
        if(m1==a[2] || m1==a[3])
        {
            if(m2==a[2] || m2==a[3])
            cout<<"YES"<<"\n";
            else
            cout<<"NO"<<"\n";
        }
        else
            cout<<"NO"<<"\n";
    }
}
