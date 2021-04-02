#include<bits/stdc++.h>
#include<string.h>
using namespace std;
 
bool solve(string s)
{
    long long int i;
    
    if(s.length()<3)
    return true;
    
        for(i=2;i<s.length();i++)
        {
            if((s[i]-'A')%26 == (s[i-1]-'A' + s[i-2]-'A')%26)
            continue;
            else
            return false;
            
        }
    return true;
}
 
int main()
{
    string s;
    cin>>s;
    
    if(solve(s))
    cout<<"YES"<<"\n";
    else
    cout<<"NO"<<"\n";
}