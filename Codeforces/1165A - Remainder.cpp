#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli n,x,y,c=0,i;
    cin>>n>>x>>y;
    string s;
    cin>>s;
    for(i=n-x;i<n;i++)
    {
        if(i==n-y-1)
        {
            if(s[i]!='1')
            c++;
        }
        else
        {
           if(s[i]!='0')
           c++; 
        }
    }
    
    cout<<c;
    
    return 0;
}
