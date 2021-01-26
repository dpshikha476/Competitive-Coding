#include <bits/stdc++.h>
 
using namespace std;
using ll = long long;
using ld = long double;
 
void solve() {
  ll n;
  cin >> n;
  ll x=n;
  while(n%2==0)
  {
      n=n/2;
  }
 if(n==1){
    cout << "NO\n";
  } else {
    cout << "YES\n";
  }
}
 
int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}