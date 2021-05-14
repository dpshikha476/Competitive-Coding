#include<iostream>
using namespace std;
int main()
{
    long long int n,c=0,d,s=0,g=0;
    cin>>n;
    while(n!=0)
    {
        d=n%10;
        if(d==4 || d==7)
        c++;
        else if(d==4)
        s++;
        else if(d==7)
        g++;
        n=n/10;
    }
    if(s>0 && g>0) 
    cout<<"YES";
    else if(c==4 ||c==7)
    cout<<"YES";
    else
    cout<<"NO";
}