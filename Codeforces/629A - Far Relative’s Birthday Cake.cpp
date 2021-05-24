#include<bits/stdc++.h>
#include<unordered_set>
#include<string.h>
#include<vector>
using namespace std;
typedef long long int lli;

lli fact(int n)
{
    return (n*(n-1))/2;
}
int main()
{
    lli n,c=0,i,j,t=0;
    cin>>n;
    char a[n][n];
    
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            cin>>a[i][j];
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j]=='C')
            c++;
        }
        t+= fact(c);
        c=0;
    }
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[j][i]=='C')
            c++;
        }
        t+= fact(c);
        c=0;
    }
    
    cout<<t<<"\n";
}
