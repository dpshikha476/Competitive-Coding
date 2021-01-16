#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i,j,c=0,d;
    vector<int> v;
    cin>>n;
    long long int a[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    for(i=0;i<n;i++)
    {
        d=0;
        for(j=0;j<n;j++)
        {
            if(a[i][j]==1 || a[i][j]==3)
            {
               d=1;
            }
        }
        if(d==0)
        {
             v.push_back(i+1);
                c++;
        }
    }
    cout<<c<<"\n";
    for(i=0;i<v.size();i++)
    cout<<v[i]<<" ";
}