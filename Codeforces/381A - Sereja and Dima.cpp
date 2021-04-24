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
    
    lli n,i,s1=0,s2=0,j,c=0;
    cin>>n;
    lli a[n];
    for(i=0;i<n;i++)
    cin>>a[i];
    i=0;
    j=n-1;
    
    while(i<=j)
    {
        if(c%2==0)
        {
            if(a[i]>=a[j])
            {
                s1=s1+ a[i];
                i++;
            }
            else
            {
                s1=s1+a[j];
                j--;
            }
            c++;
        }
        else
        {
            if(a[i]>=a[j])
            {
                s2=s2+a[i];
                i++;
            }
            else
            {
                s2=s2+a[j];
                j--;
            }
            c++;
        }
          
    }
    
    
    cout<<s1<<" "<<s2<<"\n";
}