#include<bits/stdc++.h>
#include<unordered_set>
#include<string.h>
#include<vector>
using namespace std;
typedef long long int lli;


int main()
{
    lli i,b[26]={0},l;
    char ch;
    string s;
    cin>>s;
    
    for(i=0;i<s.length();i++)
    b[s[i]-'a']++;
    
    for(i=25;i>=0;i--)
    {
        if(b[i]>0)
        {
            l=b[i];
            ch=i+'a';
            break;
        }
    }
    
    for(i=0;i<l;i++)
    cout<<ch;
}
