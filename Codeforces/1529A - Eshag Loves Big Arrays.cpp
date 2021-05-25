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
        lli n,i;
        cin>>n;
        lli a[n];
        for(i=0;i<n;i++)
        cin>>a[i];
        
        sort(a,a+n);
        if(a[0]==a[n-1])
        cout<<0<<"\n";
        else
        {
            for(i=1;i<n;i++)
            {
                if(a[i]>a[0])
                break;
            }
            
            cout<<n-i<<"\n";
        }
        
    }
}
