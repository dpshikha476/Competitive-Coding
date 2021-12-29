#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int i,n,c=0;
        unordered_set<int> s;
        cin>>n;
        
        for(i=1;i*i<=n;i++)
        {
            if(s.find(i*i)==s.end())
            {
                s.insert(i*i);
                c++;
            }
        }
        
        for(i=1;i*i*i<=n;i++)
        {
            if(s.find(i*i*i)==s.end())
            {
                s.insert(i*i*i);
                c++;
            }
        }
        
        cout<<c<<"\n";
    }
}