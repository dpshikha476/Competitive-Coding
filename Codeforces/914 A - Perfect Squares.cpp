#include <bits/stdc++.h>
using namespace std;
 
int main()
{
  long long ans=LLONG_MIN, n, x;
  cin>>n;
  for (long long i = 0; i < n; i++)
  {
    cin>>x;
    for (long long j = 0; j*j<=x; j++)
    if (j*j == x)
      x = LLONG_MIN;
    ans = max(ans, x);
  }
  cout << ans << endl;
  return 0;
}
