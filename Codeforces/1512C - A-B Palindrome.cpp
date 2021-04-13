#include<bits/stdc++.h>
#include<string.h>
#include<vector>
using namespace std;
typedef long long int lli;
 
string solve(string s, lli a, lli b)
{
    lli l,i,j,g=2;
    l=s.length();
    
    if(l==1)
    {
        if(s[0]=='?')
        {
            if(a>0)
            return "0";
            else if(b>0)
            return "1";
            else 
            return "-1";
        }
        else if(s[0]=='0')
        {
            if(a>0)
            return s;
            else
            return "-1";
        }
        else if(s[0]=='1')
        {
            if(b>0)
            return s;
            else
            return "-1";
        }
    }
    
    if(l%2==1)
    {
        
        if(a%2==1)
        {
            if(s[l/2]=='?')
            {
                s[l/2]='0';
            }
            else if(s[l/2]=='1')
            return "-1";
        }
        else if(b%2==1)
        {
           if(s[l/2]=='?')
            {
                s[l/2]='1';
            }
            else if(s[l/2]=='0')
            return "-1";
        }
        else
        return "-1";
    }
 
    while(g--)
    {
        for(i=0,j=l-1;i<l/2;i++,j--)
        {
            if(s[i]=='0')
            {
                if(s[j]=='0')
                continue;
                else if(s[j]=='?')
                {
                    if(a>0)
                    {
                        s[j]='0';
                    }
                    else
                    return "-1";
                    
                }
                else
                return "-1";
            }
            else if(s[i]=='1')
            {
                if(s[j]=='1')
                continue;
                else if(s[j]=='?')
                {
                    if(b>0)
                    {
                        s[j]='1';
                    }
                    else
                    return "-1";
                }
                else
                return "-1";
            } 
            
        }
        reverse(s.begin(), s.end());
    }
    
    for(i=0;i<l;i++)
    {
        if(s[i]=='0')
        a--;
        else if(s[i]=='1')
        b--;
    }
    
    if(a<0 || b<0)
    return "-1";
 
    for(i=0,j=l-1;i<l/2;i++,j--)
    {
        if(s[i]=='?')
        {
            if(s[j]=='?')
            {
                if(a>=2)
                {
                    s[i]='0';
                    s[j]='0';
                    a=a-2;
                }
                else if(b>=2)
                {
                    s[i]='1';
                    s[j]='1';
                    b=b-2;
                }
                else 
                {
                return "-1";
                }
            }
            
            else if(s[j]=='0')
            {
                a--;
                if(a>0)
                {
                    s[i]='0';
                    a--;
                }
                else
                return "-1";
            }
            
            else if(s[j]=='1')
            {
                b--;
                if(b>0)
                {
                    s[i]='1';
                    b--;
                }
                else
                return "-1";
            }
            
        }
    }
    
 
        
    return s;
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
        lli a,b;
        cin>>a>>b;
        
        string s;
        cin>>s;
        cout<<solve(s,a,b)<<"\n";
        
    }
    
}