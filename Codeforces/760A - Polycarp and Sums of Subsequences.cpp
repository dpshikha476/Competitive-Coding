#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    for(int i = 0; i < t; i++)
    {
        vector <int> b(7);
 
        for(int i = 0; i < 7; i++)
            cin >> b[i];
 
        cout << b[0] << ' ' << b[1] << ' ' << b[6] - b[0] - b[1] << endl;
    }
}