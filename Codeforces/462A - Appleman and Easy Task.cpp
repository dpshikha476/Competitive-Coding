#include<bits/stdc++.h>
#include<string.h>
using namespace std;
typedef long long int lli;

bool solve(lli n, char a[101][101])
{
    lli i,j,c=0;
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            c=0;
            
            if(a[i+1][j]=='o')
            c++;
            if(a[i][j+1]=='o')
            c++;
            if(a[i][j-1]=='o')
            c++;
            if(a[i-1][j]=='o')
            c++;
            
            if(c%2==0)
            continue;
            else
            return false;
        }
    }
    
    return true;
}

int main()
{
    lli n;
    cin>>n;
    
    char a[101][101];
    lli i,j;
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        cin>>a[i][j];
    }
    
    if(solve(n,a))
    cout<<"YES"<<"\n";
    else
    cout<<"NO"<<"\n";
    
}