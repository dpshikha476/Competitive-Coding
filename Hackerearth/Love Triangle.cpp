#include<bits/stdc++.h>
using namespace std;
long long int solve(long long int n)
{
    if(n<9)
    return n;
    else
    return n%9 + 10* solve(n/9);
}

int main()
{
    long long int n;
    while(cin>>n)
    {
        cout<<solve(n)<<"\n";
    }
    
}