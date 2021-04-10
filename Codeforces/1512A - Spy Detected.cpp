#include<bits/stdc++.h>
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
        lli n,i,c=0,m;
        cin>>n;
        lli a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        
        for(i=1;i<n;i++)    
        {
            if(a[i]==a[0])
            {
                c++;
            }
            else
            {
                m=i+1;
            }
        }
        
        if(c==0)
        cout<<1<<"\n";
        else
        cout<<m<<"\n";
    }
    
}