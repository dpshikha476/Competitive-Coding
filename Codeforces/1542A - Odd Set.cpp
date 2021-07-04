
#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli t;
    cin>>t;
    while(t--)
    {
        lli n,i,e=0,o=0;
        cin>>n;
        lli a[2*n];
        for(i=0;i<2*n;i++)
        {
            cin>>a[i];
            if(a[i]%2==0)
            e++;
            else
            o++;
        }
        
        if(e==o)
        cout<<"YES"<<"\n";
        else
        cout<<"NO"<<"\n";
    }
    
    return 0;
}
