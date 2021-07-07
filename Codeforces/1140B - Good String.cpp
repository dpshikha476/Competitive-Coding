
#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;


int main()
{
    lli t;
    cin>>t;
    while(t--)
    {
        lli n,i,c=0,d=0;
        cin>>n;
        string s;
        cin>>s;
        
        for(i=0;i<n;i++)
        {
            if(s[i]=='<')
            c++;
            else if(s[i]=='>')
            break;
        }
        
        for(i=n-1;i>=0;i--)
        {
            if(s[i]=='>')
            d++;
            else if(s[i]=='<')
            break;
        }
         
        cout<<min(c,d)<<"\n";
    }

    return 0;

}