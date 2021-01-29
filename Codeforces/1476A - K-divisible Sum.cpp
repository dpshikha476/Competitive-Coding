#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    long long int n,k,a;
    cin>>n>>k;
    a=(n+k-1)/k*k;
    cout<<(a+n-1)/n<<endl;
  }
}