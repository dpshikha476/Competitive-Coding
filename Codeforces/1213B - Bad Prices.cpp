
#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli t;
    cin>>t;
    while(t--)
    {
        lli n,i,c=0;
        cin>>n;
        lli a[n];
        
        for(i=0;i<n;i++)
            cin>>a[i];
        
        stack<lli> s;
        s.push(a[0]);
        
        for(i=1;i<n;i++)
        {
            if(s.empty())
            s.push(a[i]);
            else
            {
                while(!s.empty() && a[i]<s.top())
                {
                    c++;
                    s.pop();
                }
                
                s.push(a[i]);
            }
        }

        cout<<c<<"\n";
        
    }
    
    return 0;
 
}
