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
       lli a,b;
       cin>>a>>b;
       if(b==1)
       cout<<"NO"<<"\n";
       else
       {
           cout<<"YES"<<"\n";
           cout<<a<<" "<<a*b<<" "<<a*(b+1)<<"\n";
       }
        
    }
    
}
