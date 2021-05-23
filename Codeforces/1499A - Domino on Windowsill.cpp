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
        lli n,k1,k2,w,b;
        cin>>n>>k1>>k2>>w>>b;
        
        if((k1+k2)/2 >=w)
        {
            if(((2*n)-(k1+k2))/2 >=b)
                cout<<"YES"<<"\n";
            
            else
                cout<<"NO"<<"\n";
        }
        else
            cout<<"NO"<<"\n";
        
    }
    
}
