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
    if(n%2==0)
    {
        if(n%4==0)
        cout<<n/4 -1;
        else
        cout<<n/4;
    }
    else
    cout<<0;
}
