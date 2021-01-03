#include<bits/stdc++.h>
#include<string.h>
using namespace std;
typedef long long int lli;
#define forn(i,n) for(i=0;i<n;i++)
 
void solve()
{
    lli l,c=0,p,a=0,b=0,i;
    cin>>l;
    string s;
    cin>>s;
   
    for(i=0;i<l;i++)
    {
            p=s[i]-'0';
            if(p%2==1)
            {
                if(a==0)
                a=p;
                else
                b=p;
            }
           
    }
     if(a==0 || b==0)
         cout<<-1<<"\n";
     else
         cout<<a<<b<<"\n";
        
    
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    lli t;
    cin>>t;
    while(t--)
    {
    	solve();
    }
}