#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,i,j;
    cin>>t;
    while(t--)
    {
        long long int s=0,a[3];
        cin>>a[0]>>a[1]>>a[2];
        for(i=0;i<=2;i++)
        {   
            if(a[i]>0)
            {
                a[i]--;
                s++;
            }   
        }
        sort(a,a+3);
        for(i=2;i>=0;i--)
        {           
            for(j=i-1;j>=0;j--)
            {
                if(a[i]>0 && a[j]>0)
                {
                    a[i]--;
                    a[j]--;
                    s++;
                }
            }
           
        }
        
        if(a[0]>0 && a[1]>0 && a[2]>0)
        s++;
        cout<<s<<"\n";
    }
   
}