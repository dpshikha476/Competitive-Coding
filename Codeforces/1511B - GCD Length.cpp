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
       lli a,b,c,g,d;
       cin>>a>>b>>c;
       g= pow(10,c-1);
       string gcd=to_string(g);
       string x= "1", y="1";
       d=a-1;
       while(d--)
       x=x+"0";
       d=b-c;
       while(d--)
       y=y+"1";
       d=c-1;
       while(d--)
       y=y+"0";
       
       cout<<x<<" "<<y<<"\n";       
    }
    
}