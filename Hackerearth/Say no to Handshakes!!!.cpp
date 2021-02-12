#include<iostream>
using namespace std;
int main()
{
    int t,n,i,ans;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n;
        ans=(n*(n-1))/2;
        cout<<ans<<endl;
    }
}
