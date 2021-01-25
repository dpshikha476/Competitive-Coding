#include <bits/stdc++.h> 
using namespace std; 
 
bool solve(long long int a, long long int b, long long int n)
{
    long long int i,j;
    for(i=0;i<=n;i++)
    {
         if(a*i>n)
            break;
        for(j=0;j<=n;j++)
        {
            if(a*i+b*j==n)
            return true;
            if(a*i+b*j>n)
            break;
        }
    }
    return false;
}
 
int main() 
{ 
   long long int t;
    cin>>t;
    while(t--)
    {
    long long int a = 2020, b = 2021,n;
    cin>>n;
    if (solve(a, b, n)) 
        cout << "YES"<<"\n"; 
    else
        cout << "NO"<<"\n"; 
    }
    return 0; 
} 