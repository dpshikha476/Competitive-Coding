#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

bool check(lli a[], lli n)
{
    lli i,b[26]={0};
    bool flag;
    if(a[0]==0)
    flag=true;
    else
    flag=false;
    
    b[a[0]]++;
    for(i=1;i<n;i++)
    {
        b[a[i]]++;
        if(a[i]==0)
        {
            flag=true;
            continue;
        }
        
        if(flag==true)
        {
            if(a[i-1]>=a[i])
            return false;
        }
        else
        {
            if(a[i-1]<=a[i])
            return false;
        }
    }
    
    for(i=0;i<n;i++)
    if(b[i]!=1)
    return false;
    
    return true;
}

int main()
{
    lli t;
    cin>>t;
    while(t--)
    {
        lli i,l;
        string s;
        cin>>s;
        l=s.length();
        lli a[l];
        
        for(i=0;i<l;i++)
        a[i]=s[i]-'a';
        
        if(check(a,l))
        cout<<"YES"<<"\n";
        else
        cout<<"NO"<<"\n";
        
    }
    
    return 0;
 
}