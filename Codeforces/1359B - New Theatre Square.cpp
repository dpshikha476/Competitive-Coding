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
       lli n,m,x,y,j,i,c=0,d=0,ans;
       cin>>n>>m>>x>>y;
       char a[n][m+1];
       
       for(i=0;i<n;i++)
       {
           for(j=0;j<m;j++)
           {
               cin>>a[i][j];
           }
           a[i][j]='x';;
       }
       
       
       for(i=0;i<n;i++)
       {
           for(j=0;j<m;j++)
           {
               if(a[i][j]=='.')
               {
                   if(a[i][j+1]=='.')
                   {
                       d++;
                       j++;
                   }
                   else
                   {
                       c++;
                       j++;
                   }
               }
           }
           
       }
       
       if(d*2*x > d*y)
       ans= d*y +c*x;
       else
       ans= d*x*2+c*x;
       
       cout<<ans<<"\n";
    
    }
}
