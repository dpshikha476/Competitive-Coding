#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,b[26]={0},c=0,i;
    cin>>n;
    string s;
    cin>>s;
    if(n>26)
    cout<<-1;
    else
    {
        for(i=0;i<n;i++)
        {
            b[s[i]-'a']++;
        }
        
        for(i=0;i<26;i++)
        {
            if(b[i]>1)
            c= c+ b[i]-1;
            
        }
        cout<<c<<"\n";
    }
}