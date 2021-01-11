#include<bits/stdc++.h>
using namespace std;
 
bool isPrime(int j)
{
    int k,d=0;
    for(k=1;k<=j;k++)
    {
        if(j%k==0)
        d++;
    }
    if(d==2)
    return true;
    else
    return false;
}
 
int main()
{
    long long int n,i,j,c=0,count=0;
    cin>>n;
    for(i=4; i<=n;i++)
    {
        c=0;
        for(j=1;j<i;j++)
        {
            if(i%j==0)
            {
                if(isPrime(j))
                {
                    c++;
                }
            }
        }
        if(c==2)
        count++;
    }
    cout<<count;
}
