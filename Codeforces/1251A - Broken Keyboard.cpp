#include<bits/stdc++.h>
#include<string.h>
#include<vector>
using namespace std;
typedef long long int lli;
 
vector<char> solve(string s)
{
       vector<char> v;
       char ch[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q',          'r','s','t','u','v','w','x','y','z'};
       lli i,l,b[26]={0};
       l=s.length();

       
       s=  s + ".";
       for(i=0;i<l;i++)
       {
            if(s[i]==s[i+1])
            i++;
            else 
            b[s[i]-'a']=1;
       }
        
       for(i=0;i<26;i++)
       {
           if(b[i]==1)
           {   
               v.push_back(ch[i]);
           }

       }

    
       return v;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    lli t;
    cin>>t;
    while(t--)
    {
       string s;
       cin>>s;
      vector<char>v;
      v=solve(s);
      if(v.size()==0)
      cout<<" "<<"\n";
      else
      {
        for(lli i=0;i<v.size();i++)
        cout<<v[i];
        
        cout<<"\n";
      }
    }
}



