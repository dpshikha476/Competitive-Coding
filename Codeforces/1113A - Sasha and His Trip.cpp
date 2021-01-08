#include <bits/stdc++.h>
using namespace std;
 
 
int32_t main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
 
    int n, v;
    cin >> n >> v;
    if (n-1 <= v) 
    {
        cout << n-1 << endl;
        return 0;
    }
    int result = v - 1;
    for(int i = 1; i <= n - v; ++i) 
    {
        result += i;
    }
    cout << result << endl;
 
    return 0;
}