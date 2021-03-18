#include<bits/stdc++.h>
#include<string.h>
using namespace std;
typedef long long int lli;


bool solve(lli n, char a[300][300])
{
    lli i,j;
    char x= a[0][0],y=a[0][1];
    
    if(x==y)
    return false;
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j || i+j == n-1)
            {
                if(a[i][j]==x)
                continue;
                else 
                return false;
            }
            else 
            {
                if(a[i][j]==y)
                continue;
                else 
                return false;
            }
            
        }
    }
    
    
    return true;
}


int main()
{
    lli n,i,j;
    cin>>n;
    char a[300][300];
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
