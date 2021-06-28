#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli r;
    cin>>r;
    lli y=(r-3)/2;
    if(r%2==1 && y>0)
    cout<<1<<" "<<y;
    else
    cout<<"NO";
    
    return 0;
}
