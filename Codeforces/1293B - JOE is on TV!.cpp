#include<bits/stdc++.h>
#include<unordered_set>
#include<string.h>
#include<vector>
using namespace std;
typedef long long int lli;


int main()
{
    float n,x=0;
    cin>>n;
    
    while(n)
    {
        x+= 1.0/n;
        n--;
    }
    
    string s=to_string(x);
    int l=s.length();
    for(int i=0;i<14-l;i++)
    {
        s=s+"0";
    }
    
    cout<<s;
}
