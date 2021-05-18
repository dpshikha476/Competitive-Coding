#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    long long int l,i,d=0,j;
    string s,t;
    cin>>s>>t;
    l=s.length();
    for(i=0,j=l-1;i<l;i++,j--)
    {
        if(s[i]!=t[j])
        {
            d=1;
            break;
        }
    }
    if(d==0)
    cout<<"YES";
    else
    cout<<"NO";
    
}