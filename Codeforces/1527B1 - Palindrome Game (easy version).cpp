#include<bits/stdc++.h>
#include<unordered_set>
#include<string.h>
#include<vector>
using namespace std;
typedef long long int lli;

 
int main()
{
    lli t;
    cin>>t;
    while(t--)
    {
        int n,i,c=0;
        cin>>n;
        string s;
        cin>>s;
        for(i=0;i<s.length();i++)
        if(s[i]=='0')
        c++;
        
        if(c%2==0 || c==1)
        cout<<"BOB"<<"\n";
        else
        cout<<"ALICE"<<"\n";
    }
    
}