#include<bits/stdc++.h>
#include<unordered_set>
#include<string.h>
#include<vector>
using namespace std;
typedef long long int lli;


int main()
{
    lli n;
    cin>>n;
    lli i,j,d,m,c,l=1;
    vector<lli> v(1000,0);
    v[0]=1;
        
    for(i=2;i<=n;i++)
    {
        for(j=0;j<l;j++)
        {
            m=i*v[j]+c;
            d=m%10;
            v[j]=d;
            c=m/10;    
        }
            
        while(c)
        {
            d=c%10;
            v[l]=d;
            l++;
            c=c/10;
        }
    }
        
    for(i=l-1; i>=0;i--)
    cout<<v[i];
}
