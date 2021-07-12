

#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{

        lli n,i,m,c1=0,c2=0;
        cin>>n;
        unordered_map<int,int> pos;
        lli a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            pos[a[i]]=i;
        }
        
        cin>>m;
        
        while(m--)
        {
            lli x;
            cin>>x;
            
            c1+=pos[x]+1;
            c2+=n-pos[x];
            
        }
        
        cout<<c1<<" "<<c2;
        
    return 0;
 
}
