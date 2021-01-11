#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    long long int n,l,r,s=0,g=0,i;
    cin>>n>>l>>r;
    for(i=0;i<l;i++)
    s=s+pow(2,i);
    s=s+(1*(n-l));
    
    for(i=0;i<r;i++)
    g=g+pow(2,i);
    g=g+(n-r)*pow(2,r-1);
    
    cout<<s<<" "<<g;
}