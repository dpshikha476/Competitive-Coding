#include<bits/stdc++.h>
#include<unordered_set>
#include<string.h>
#include<vector>
using namespace std;
typedef long long int lli;

int main()
{
    lli t,x=0,y=0;
    cin>>t;
    while(t--)
    {
        lli a,b;
        cin>>a>>b;
        if(a>b)
        x++;
        else if(b>a)
        y++;  
    }
    
    if(x>y)
    cout<<"Mishka";
    else if(y>x)
    cout<<"Chris";
    else if(x==y)
    cout<<"Friendship is magic!^^";
    
}
