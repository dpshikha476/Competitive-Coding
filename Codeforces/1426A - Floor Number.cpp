#include<iostream>
using namespace std;
int main()
{
    long long int t,n,x,i,d;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n>>x;
        if(n>2)
        {
            d=(n-2+x-1)/x;
            cout<<d+1<<"\n";
            
        }
        else
        cout<<1<<"\n";
    }
}