#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    long long int i,d=0;
    string s;
    cin>>s;
    for(i=1;i<s.length() -1;i++)
    {
        if(s[i]=='A')
        {
            if(s[i+1]=='B')
            {
                if(s[i-1]=='C')
                {
                    d=1;
                    cout<<"YES"<<"\n";
                }
            }
            else if(s[i+1]=='C')
            {
                  if(s[i-1]=='B')
                {
                    d=1;
                    cout<<"YES"<<"\n";
                }
            }
        }
        else if(s[i]=='B')
        {
             if(s[i+1]=='A')
            {
                if(s[i-1]=='C')
                {
                    d=1;
                    cout<<"YES"<<"\n";
                }
            }
            else if(s[i+1]=='C')
            {
                  if(s[i-1]=='A')
                {
                    d=1;
                    cout<<"YES"<<"\n";
                }
            }
        }
         else if(s[i]=='C')
        {
             if(s[i+1]=='B')
            {
                if(s[i-1]=='A')
                {
                    d=1;
                    cout<<"YES"<<"\n";
                }
            }
            else if(s[i+1]=='A')
            {
                  if(s[i-1]=='B')
                {
                    d=1;
                    cout<<"YES"<<"\n";
                }
            }
        }
        if(d==1)
        break;
 
    }
        if(d==0)
        cout<<"NO";
}