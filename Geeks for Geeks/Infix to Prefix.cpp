#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define forn(i,n) for(i=0;i<n;i++)

int pref(char ch)
    {
        if(ch=='^')
        return 3;
        
        else if(ch=='*' || ch=='/')
        return 2;
        
        else if(ch=='+' || ch=='-')
        return 1;
        
        else
        return -1;
    }
    
    string reverse(string s)
    {
        int i,j;
         
        for(i=0,j=s.length()-1;i<s.length()/2;i++,j--)
        {
            swap(s[i],s[j]);
        }
        
        return s;
    }
    
    string infixToprefix(string s)
    {
        stack<char> st;
        int i;
        string r;
        
        for(i=s.length()-1;i>=0;i--)
        {
            char h=s[i];
            
            
            if((h>='a' && h<='z') || (h>='A' && h<='Z') || (h>='0' && h<='9'))
                r+=h;
            
            else if(h=='(')
                st.push('(');
            
            else if(h==')')
            {
                while(!st.empty() && st.top()!='(')
                {
                    char t=st.top();
                    st.pop();
                    r+=t;
                }
                st.pop();
            }
            
            else
            {
                while(!st.empty() && pref(h) < pref(st.top()))
                {
                    char t=st.top();
                    st.pop();
                    r+=t;
                }
                
                st.push(h);
            }
        }
        
        
        while(!st.empty())
        {
            char t=st.top();
            st.pop();
            r+=t;
        }
        
        r=reverse(r);
        return r;
    }

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    
    cout<< infixToprefix(s);
}

