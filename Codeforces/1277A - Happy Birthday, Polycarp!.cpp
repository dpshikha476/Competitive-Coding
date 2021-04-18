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
        lli n,c=0,i,j,b=0;
        cin>>n;
       
       for(i=1;i<=9;i++)
       {
           b=b*10+1;
           for(j=1;j<=9;j++)
           {
               if(b*j<=n)
               c++;
           }
       }
       cout<<c<<"\n"; 
    }
}
