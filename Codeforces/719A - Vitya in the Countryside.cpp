#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli n,i;
    cin>>n;
    lli a[n];
    
    for(i=0;i<n;i++)
    cin>>a[i];
    
    if(n==1 && a[0]==15)
    cout<<"DOWN"<<"\n";
    else if(n==1 && a[0]==0)
    cout<<"UP"<<"\n";
    else if(n==1 && a[0]!=15 && a[0]!=0)
    cout<<-1<<"\n";
    else if((a[n-1]>a[n-2] || a[n-1]==0) && a[n-1]!=15)
    cout<<"UP"<<"\n";
    else
    cout<<"DOWN"<<"\n";
    
    return 0;
 
}
