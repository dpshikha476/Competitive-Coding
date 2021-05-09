#include<bits/stdc++.h>
#include<unordered_set>
#include<string.h>
#include<vector>
using namespace std;
typedef long long int lli;

int power(lli x, lli y, lli m)
{
     
    int res = 1;
    x=x%m;
    if(x==0)
    return 0;
    while (y)
    {
         
        if (y % 2 == 1)
            res = (res * x)%m;
             
        y = y >> 1;
         
        x = (x * x)%m;
    }
    return res;
}

int main()
{
    lli t;
    cin>>t;
    while(t--)
    {
        lli n,m=1000000007;
        cin>>n;
        
        cout<<power(2,n-1,m)<<"\n";
        
    }
    
}



