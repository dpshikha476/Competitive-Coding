#include<bits/stdc++.h>
#include<math.h>
using namespace std;
typedef long long int lli;
#define forn(i,n) for(i=0;i<n;i++)

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     int n,k,d=0,r,c=0,a;
    cin>>n>>k;
   while(n--)
    {
        cin>>a;
        d=d+a;
       r=min(d,8);
        d=d-r;
        k=k-r;
        c++;
        if(k<=0)
        break;
    }
    if(k>0)
    cout<<-1;
    else
    cout<<c;   
}
