#include <bits/stdc++.h>
    using namespace std;
 
    int main()
    {
        int t;
        cin>>t;
        
        while(t--)
        {
            int a[3];
            cin>>a[0]>>a[1]>>a[2];
            sort(a,a+3);
            
            if(a[0]==a[1])
            {
                if(a[2]%2==0)
                cout<<"YES"<<"\n";
                else
                cout<<"NO"<<"\n";
            }
            else if(a[2]==a[1])
            {
                if(a[0]%2==0)
                cout<<"YES"<<"\n";
                else
                cout<<"NO"<<"\n";
            }
            else if(a[0]==a[2])
            {
                if(a[1]%2==0)
                cout<<"YES"<<"\n";
                else
                cout<<"NO"<<"\n";
            }
            else if(a[2]-a[0]==a[1])
                cout<<"YES"<<"\n";
            else
                cout<<"NO"<<"\n";
        }
    }
