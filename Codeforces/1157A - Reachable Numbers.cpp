#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

lli f(int x)
{
    x+=1;
    while(x%10==0)
    {
        x=x/10;
    }
    
    return x;
}


int main()
{
    lli n;
    cin>>n;
    unordered_set<int> s;
    
    while(s.find(n)==s.end())
    {
        s.insert(n);
        n=f(n);
    }
    
    cout<<s.size();
    
    
    return 0;
}
