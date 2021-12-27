#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int i,l=s.length();
        
        if(l%2==1)
        cout<<"NO"<<"\n";
        else
        {
            if(s.substr(0,l/2)==s.substr(l/2,l/2))
            cout<<"YES"<<"\n";
            else
            cout<<"NO"<<"\n";
        }
        
    }
}