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
    
    lli t;
    cin>>t;
    while(t--)
    {
        lli n,i,c=0;
        cin>>n;
        lli a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]==1 || a[i]==3)
            c++;
        }
        cout<<c<<"\n";
    }
    
}

