#include <bits/stdc++.h>
using namespace std;
 
long long F(long long x)
{
    if(x % 2 == 0)
        return x / 2;
    else
        return -x + F(x-1);
}
 
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int l,r;
        cin >> l >> r;
        cout << F(r) - F(l-1) << '\n';
    }
    return 0;
}