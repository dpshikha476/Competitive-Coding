#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i,j;
    cin>>n;
    string s;
    cin>>s;
    for(i=2;i<=n;i++)
    {
        if(n%i==0)
        {
            for (j=0;j<i/2; j++) 
            swap(s[j], s[i-j-1]);
        }
    }
    cout<<s<<"\n";
}