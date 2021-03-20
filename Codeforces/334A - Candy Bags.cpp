#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,k,i;
    cin>>n;
    k=n*n;
    for(i=1;i<=k/2;i++)
    {
        cout<<i<<" "<<k-i+1<<"\n";
    }
}