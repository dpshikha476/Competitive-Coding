#include<bits/stdc++.h>
#include<unordered_set>
#include<string.h>
#include<vector>
using namespace std;
typedef long long int lli;
 
int setBitNumber(int n)
{
    if (n == 0)
        return 0;
 
    int msb = 0;
    n = n / 2;
    while (n != 0) {
        n = n / 2;
        msb++;
    }
 
    return (1 << msb)-1;
}
 
 
int main()
{
    lli t;
    cin>>t;
    while(t--)
    {
        int n,i;
        cin>>n;
        cout<<setBitNumber(n)<<"\n";
    }
    
}