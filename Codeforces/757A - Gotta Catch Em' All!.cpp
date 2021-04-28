

#include<bits/stdc++.h>
#include<string.h>
#include<vector>
using namespace std;
typedef long long int lli;
 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    string st;
    cin>>st;
    lli B=0,u=0,a=0,s=0,r=0,b=0,l=0,i,n,m,f;
    
    for(i=0;i<st.length();i++)
    {
        if(st[i]=='B')
        B++;
        else if(st[i]=='b')
        b++;
        else if(st[i]=='a')
        a++;
        else if(st[i]=='s')
        s++;
        else if(st[i]=='l')
        l++;
        else if(st[i]=='u')
        u++;
        else if(st[i]=='r')
        r++;
    }
    
    m= min(u/2 , a/2);
    f= min(s,r);
    f= min(B,f);
    n= min(l,min(b, f));
    
    cout<<min(m,n)<<"\n";
    
}

