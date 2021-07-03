
#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{

    lli n,m,a,b,x,y;
    cin>>n>>m>>a>>b;
      
    cout<< min(((n+m-1)/m) * b, min(  n*a , n/m *b + n%m *a ));
    
    return 0;
}
