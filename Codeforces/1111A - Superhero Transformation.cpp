#include<bits/stdc++.h>
#include<string.h>
using namespace std;
 
bool solve(string s, string t)
{
    long long int e1=0,o1=0,l1,l2,e2=0,o2=0,i;
    l1=s.length();
    l2=t.length();
    if(l1!=l2)
    return false;
    
    for(i=0;i<l1;i++)
    {
        if(s[i]=='a'|| s[i]=='e'|| s[i]=='i'|| s[i]=='o'|| s[i]=='u' )
       {
            if(t[i]=='a'|| t[i]=='e'|| t[i]=='i'|| t[i]=='o'|| t[i]=='u' )
            continue;
            else
            return false;
       }
       else
       {
            if(t[i]=='a'|| t[i]=='e'|| t[i]=='i'|| t[i]=='o'|| t[i]=='u' )
            return false;
            else
            continue;
       }
    }
 
    return true;
    
}
int main()
{
    string s,t;
    cin>>s>>t;
    
    if(solve(s,t))
    cout<<"Yes";
    else
    cout<<"No";
}