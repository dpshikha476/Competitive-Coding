#include<bits/stdc++.h>
#include<vector>
using namespace std;
typedef long long int lli;

int main()
{
   lli n,i;
   cin>>n;
   string s;
   unordered_map<string,int> m;
   
   while(n--)
   {
        cin>>s;
        if(m.find(s)==m.end())
        {
            m[s]++;
            cout<<"OK"<<"\n";
        }
        else 
        {
            i=m[s];
            m[s]++;
            s=s+to_string(i);
            cout<<s<<"\n";
            m[s]++;
        }  
   }
   
   return 0;
   
}

