#include<bits/stdc++.h>
#include<string.h>
using namespace std;
typedef long long int lli;

bool solve(lli n, lli k, string s)
{
    lli i,c=0,j;
    for(i=0;i<n;i++)
    {
        if(s[i]=='*')
        {
            c=1;
            for(j=i+1;j<n;j++)
            {
                if(s[j]=='*')
                c++;
                else
                break;
            }
            i=j;
            if(c>=k)
            return true;
        }
    }
    return false;
}

int main() 
{
    lli t;
    cin>>t;
    while(t--)
    {
       lli n,k;
       cin>>n>>k;
       string s;
       cin>>s;
       
       if(solve(n,k,s))
       cout<<"YES"<<"\n";
       else
       cout<<"NO"<<"\n";
    }
    return 0;
}
