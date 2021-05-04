#include<bits/stdc++.h>
#include<string.h>
#include<vector>
using namespace std;
typedef long long int lli;
  
bool isPower(int n)
{
   if(n==0)
   return false;
 
   return (ceil((double)sqrt(n)) == floor((double)sqrt(n)));

}

int main()
{
    lli t;
    cin>>t;
    while(t--)
    {
        lli n;
        cin>>n;
        
        if(n%2==0 && isPower(n/2))
        cout<<"YES"<<"\n";
        else if(n%4==0 && isPower(n/4))
        cout<<"YES"<<"\n";
        else
        cout<<"NO"<<"\n";
        
    }
    
}















