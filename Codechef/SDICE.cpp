#include<bits/stdc++.h>
#include<string.h>
using namespace std;
typedef long long int lli;

int main() 
{
    lli t;
    cin>>t;
    while(t--)
    {
      lli n,ans,r;
      cin>>n;
      if(n==1)
      ans= 20;
      else if(n==2)
      ans= 36;
      else if(n==3)
      ans = 51;
      else if(n==4)
      ans= 60;
      else
      {
          r= n%4;
          ans=((n-r)/4)*44;
          if(r==0)
          ans+=16;
          else if(r==1)
          ans+=32;
          else if(r==2)
          ans+=44;
          else if(r==3)
          ans+=55;
      }
      cout<<ans<<"\n";
      
    }
    return 0;
}
