#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<stack>
using namespace std;


int main() 
{
    stack<int> s;
    stack<int> v;
    long long int n;
    cin>>n;
    while(n--)
    {
        long long int q,k;
        cin>>q;
        if(q==1)
        {
            cin>>k;
            s.push(k);
            if(s.size()==1)
            v.push(k);
            
            if(k>v.top())
            v.push(k);
            else 
            v.push(v.top());
        }
        else if(q==2)
        {
            if(s.empty()==false)
            s.pop();
            v.pop();
        }
        else if(q==3)
        {
           cout<<v.top()<<"\n";
            
        }
    }
    return 0;
}