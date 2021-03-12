#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int a,b,ans=0,d;
        cin>>a>>b;
        if(a==b)
        ans=0;
        else 
        {
            if(a>b)
            {
                if(a%b==0)
                {
                    d=a/b;
                    while(d%8==0)
                    {
                        d=d/8;
                        ans++;
                    }
                     while(d%4==0)
                    {
                        d=d/4;
                        ans++;
                    }
                     while(d%2==0)
                    {
                        d=d/2;
                        ans++;
                    }
                    if(d!=1)
                    ans=-1;
                }
                else
                ans=-1;
                
            }
            else if(b>a)
            {
                if(b%a==0)
                {
                    d=b/a;
                    while(d%8==0)
                    {
                        d=d/8;
                        ans++;
                    }
                     while(d%4==0)
                    {
                        d=d/4;
                        ans++;
                    }
                     while(d%2==0)
                    {
                        d=d/2;
                        ans++;
                    }
                    if(d!=1)
                    ans=-1;
                }
                else
                ans=-1;
                
               
            }
            
            
        }
        
        cout<<ans<<"\n";
    }
}