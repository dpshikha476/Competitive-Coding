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
    
    lli n,i,j,s1,s2,sum=0,k=-1;
    cin>>n;
    lli a[n];
    for(i=0;i<n;i++)
    cin>>a[i];
    i=-1;
    j=n;
    s1=0;
    s2=0;
    while(i<j)
    {
        
        if(s1<s2)
        {
            s1=s1+a[++i];
        }
        else if(s2<s1)
        {
            s2=s2+a[--j];
        }
        
        else
        {
            k=i;
            s1+=a[++i];
            s2+=a[--j];
        }  
    }
    
 
   for(i=0;i<k+1;i++)
   sum+=a[i];
   
   cout<<sum<<"\n";
    
}





