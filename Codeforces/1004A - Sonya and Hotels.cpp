#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
    long long int n,d,i,c=0,k,j;
    cin>>n>>d;
    long long int a[n];
    for(i=0;i<n;i++)
    cin>>a[i];
    vector<int> v;
    for(i=0;i<n;i++)
    {
        k= a[i]+d;
        j= a[i]-d;
         if(abs(j-a[i-1])>=d)
        {
            
                v.push_back(j);
                
        }
        if(abs(a[i+1]-k)>=d)
        {
            v.push_back(k);
        }
       
    }
    for(i=0;i<v.size();i++)
    {
        if(v[i]!=v[i-1])
        c++;
    }
    cout<<c;
}
