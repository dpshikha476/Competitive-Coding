#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        int c[3]={0};
       for(int i=0;i<n;i++)
       {
        cin>>a[i];
        c[a[i]%3]++;
       }
        
      cout<< max(max((c[1]-c[0]),(c[2]-c[1])),(c[0]-c[2]))<<endl;
    }
}