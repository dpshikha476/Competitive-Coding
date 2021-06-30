
#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;


int main()
{
    lli b,g,n,i;
    cin>>b>>g>>n;
    
    cout<<min(g,n)-(n-min(b,n))+1<<"\n";
    
    return 0;
}
