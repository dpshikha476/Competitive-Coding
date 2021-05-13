#include<iostream>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    long long int a[n],b[n],s=0,m=0,i;
    for(i=0;i<n;i++)
    cin>>a[i]>>b[i];
    for(i=0;i<n;i++)
    {
      s=s+b[i];
      s=s-a[i];
      if(s>m)
      m=s;
    }
    cout<<m;
}