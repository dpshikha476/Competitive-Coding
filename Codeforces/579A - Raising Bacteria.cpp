#include<bits/stdc++.h>
#include<unordered_set>
#include<string.h>
#include<vector>
using namespace std;
typedef long long int lli;
 
lli count_one (lli n)
{
    lli count=0;
    while( n )
    {
        n = n&(n-1);
        count++;
    }
    return count;
}
 
int main()
{
    lli n;
    cin>>n;
    cout<<count_one (n);
   
}
