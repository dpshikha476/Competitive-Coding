#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
    long long int t,i,s,x,y,z,d=0;
    cin>>t>>s>>x;
    if(t>x)
    cout<<"NO"<<"\n";
    
    else if((x-t)%s==0 || ((x-t-1)%s==0 && (x-t-1)!=0))
    cout<<"YES"<<"\n";
    else
    cout<<"NO"<<"\n";
}