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
    if(n==0)
    cout<<0;
    else if((n+1)%2==0)
    cout<<(n+1)/2;
    else
    cout<<n+1;
    
}
