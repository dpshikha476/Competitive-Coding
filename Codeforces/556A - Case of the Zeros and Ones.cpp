#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    long long int n,i,c=0,l=0;
    cin>>n;
    string s;
    cin>>s;
    for(i=0;i<n;i++)
    {
        if(s[i]=='0')
        c++;
        else
        l++;
        
    }
    cout<<abs(l-c)<<"\n";
    
 
}