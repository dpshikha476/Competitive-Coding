#include<bits/stdc++.h>
using namespace std;

vector<char> convert(long long int num) 
{
    vector<char>s;
    long long int n= num;
    while(n!=0)
    {
        int d=n%2;
        s.push_back(d+'0');
        n=n/2;
    }

     reverse(s.begin(), s.end()); 
   return s;
}

long long int contert(vector<char> n) {
   long long int val = 0;
   int temp = 1;
   int len = n.size();
   for (int i = len - 1; i >= 0; i--) {
      if (n[i] == '1')
      val += temp;
      temp = temp * 2;
   }
   return val;
}

long long int solve(long long int c)
{
    long long int d,i,g,h;
    vector<char> a=convert(c);
    vector<char> b;
    vector<char> r;
    if(a[0]=='0')
    {
        b.push_back('0');
        r.push_back('1');
    }
    else 
    {
        b.push_back('1');
        r.push_back('0');   
    }
    for(i=1;i<a.size();i++)
    {
        if(a[i]=='0')
        {
             b.push_back('1');
             r.push_back('1');   
        }
        else {
                b.push_back('0');
                r.push_back('1');
        }
    }
    
    g=contert(b);
    h=contert(r);
  
    return g*h;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int c,m;
        cin>>c;
        
        m=solve(c);
        cout<<m<<"\n";
    }
    
}