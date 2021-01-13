#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m=INT_MAX,c=0,i,j;
    cin>>n;
    long long int a[n];
    for(i=0;i<n;i++)
    cin>>a[i];
    for(i=0;i<n;i++)
    {
        if(a[i]<m)
        {
            m=a[i];
            j=i+1;
        }
    }
     for(i=0;i<n;i++)
     {
         if(a[i]==m)
         c++;
     }
     if(c>1)
        cout<<"Still Rozdil";
        else
        cout<<j;
}