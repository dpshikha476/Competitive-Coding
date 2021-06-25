#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

string solve(string s)
{
    lli i,c1=0,c2=0;
    
    for(i=0;i<s.length();i++)
    {
        if(s[i]=='a')
        c1++;
        else
        c2++;
    }
    
    if(c2%2==1)
    return ":(";
    
    string r=s.substr(s.length()-c2/2,c2/2);
    string f="";
    
    for(i=0;i<s.length()-c2/2;i++)
    {
        if(s[i]!='a')
        f=f+s[i];
    }
    
    if(r==f)
    return s.substr(0,s.length()-c2/2);
    else
    return ":(";
    
}
int main()
{
    string s;
    cin>>s;
    
    cout<<solve(s)<<"\n";
    
    return 0;
}
