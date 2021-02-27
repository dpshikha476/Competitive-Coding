#include <bits/stdc++.h>
using namespace std;

int main() 
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int a[10],k,i,j,d=0;
        for(i=0;i<10;i++)
        cin>>a[i];
        
        cin>>k;
        for(j=9;j>=0;j--)
        {
            if(a[j]>k)
            {
                a[j]=a[j]-k;
                k=0;
            }
            else if(a[j]<=k && a[j]>0)
            {
                k=k-a[j];
                a[j]=0;
               
            }
            
            if(k==0)
            break;
        }
        for(j=9;j>=0;j--)
        {
            if(a[j]>0)
            {
                cout<<j+1<<"\n";
                d=1;
                break;
            }
        }
        if(d==0)
        cout<<0;
    }
    return 0;
}
