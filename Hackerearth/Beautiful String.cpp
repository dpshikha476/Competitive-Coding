#include<bits/stdc++.h>
#include<string.h>
#include<unordered_map>
using namespace std;
bool solve(string s, long long int l)
{
    long long int n,i,freq[30]={},d=0,j;
    n=s.length();
    for(i=0;i<n;i++)
    {
    if(i<l-1)
        freq[s[i]-'a']++;
    
    else
    {
        if(i>=l)
        {
            freq[s[i-l]-'a']--;
        }
        freq[s[i]-'a']++;

       long long maxi=INT_MIN,mini=INT_MAX;
       for(j=0;j<26;j++)
       {
           if(freq[j]>0)
           {
               maxi=max(freq[j],maxi);
                mini=min(freq[j],mini);
           }
       }
       if(maxi==mini)
       {
           d=1;
           break;
       }
      
    }
    }
    if(d==1)
     return true;
       else
       return false;
    
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int t;;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        long long int l;
        cin>>l;
        if(solve(s,l))
        cout<<"YES"<<"\n";
        else
        cout<<"NO"<<"\n";
        
       
    }
}