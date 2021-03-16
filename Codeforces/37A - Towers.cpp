#include<bits/stdc++.h>
#include<string.h>
using namespace std;
typedef long long int lli;
 
int main()
{
        lli n;
        cin>>n;
        lli a[n],b[1001]={0},i,m=0,k;
        for(i=0;i<n;i++)
        cin>>a[i];
        
        sort(a,a+n);
        
        for(i=0;i<n;i++)
        {
            b[a[i]]++;
        }
        
        for(i=0;i<=a[n-1];i++)
        {
            m= max(m,b[i]);
            if(b[i]>0)
            k++;
        }
        
        cout<<m<<" "<<k<<"\n";
}