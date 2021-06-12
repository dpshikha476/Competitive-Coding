#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define forn(i,n) for(i=0;i<n;i++)

string postfixToprefix(string s)
{
    lli i,l;
    l=s.length();
    stack<string> st;
    for(i=0;i<l;i++)
    {
        if((s[i]>='a' && s[i]<='z')  || (s[i]>='A' && s[i]<='Z') || (s[i]>='0' && s[i]              <='9'))
        st.push(string(1,s[i]));
        
        else
        {
            string a=st.top();
            st.pop();
            string b=st.top();
            st.pop();
            string r=s[i]+b+a;
            st.push(r);
            
        }
    }
    
    string t=st.top();
    
    return t;

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    
    cout<<postfixToprefix(s);
}
