#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

bool solve(lli x, lli r, lli m)
{
   lli a;
   r=r*60;
   m=m*60;
  if(r<=x && r<=m)
  return true;
  else if(r>x)
  {
      a= x+ 2*(r-x);
      if(a<=m)
      return true;
  }
  return false;

}

int main()
{
    lli t;
    cin>>t;
    while(t--)
    {
        lli x,r,m;
        cin>>x>>r>>m;
        
        if(solve(x,r,m))
        cout<<"YES"<<"\n";
        else
        cout<<"NO"<<"\n";
    }
}