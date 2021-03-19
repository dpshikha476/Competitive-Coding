#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    long long int n,a[7],i,s=0;
    cin>>n;
    for(i=0;i<7;i++)
    cin>>a[i];
    
    for(i=0;i<7;i++)
    {
        s=s+a[i];
        if(s>=n)
        {
            break;
        }
        if(i==6)
        i=-1;
    }
    
    cout<<i+1<<"\n";
    
}
