#include<bits/stdc++.h>
#include<string.h>
#include<vector>
using namespace std;
typedef long long int lli;
 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    lli k,l,i,d=0;
    cin>>k>>l;
    
    while(l>=1)
    {
        if(l%k==0)
        {
            l=l/k;
            d++;
        }
        else
        break;
    }
    
    if(l==1)
    {
        cout<<"YES"<<"\n"<<d-1;
    }
    else
    cout<<"NO";
}