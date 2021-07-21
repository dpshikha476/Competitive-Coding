#include<bits/stdc++.h>
#include<vector>
using namespace std;
typedef long long int lli;
int main()
{
   lli t;
   cin>>t;
   while(t--)
   {
       lli n,d,x,i,flag=0;
       cin>>n>>d;
       
       if(n>=d)
       cout<<"YES"<<"\n";
       else
       {
            for(i=1;i<=n;i++)
            {
                x=(d+i)/(i+1);
                if(x+i<=n)
                {
                    cout<<"YES"<<"\n";
                    flag=1;
                    break;
                }
            }
            
            if(flag==0)
            cout<<"NO"<<"\n";
       }
    
   }
   
   return 0;
   
}
