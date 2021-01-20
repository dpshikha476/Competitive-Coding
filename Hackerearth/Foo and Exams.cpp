#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,i,a,b,c,d,k,;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c>>d>>k;
        for(i=1;i<k;i++)
        {
            s=i*i*i*a+i*i*b+i*c+d;
             if(s>k)
             {
                 cout<<i-1<<"\n";
                 break;
             }
        }
      
    }
}