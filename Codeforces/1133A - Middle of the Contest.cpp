#include<bits/stdc++.h>
#include<string.h>
using namespace std;
typedef long long int lli;

int main()
{
    string s,e;
    getline(cin,s);
    getline(cin,e);
    
    lli m,n,d;
    
    m= 60* stoi(s.substr(0,2)) + stoi(s.substr(3,2));
    n= 60* stoi(e.substr(0,2)) + stoi(e.substr(3,2));
    
    d= (m+n)/2;
    if(d/60<10)
    cout<<0<<d/60;
    else
    cout<<d/60;
    cout <<':';
    if(d%60 < 10)
    cout<<0<<d%60<<"\n";
    else
    cout<<d%60<<"\n";
}