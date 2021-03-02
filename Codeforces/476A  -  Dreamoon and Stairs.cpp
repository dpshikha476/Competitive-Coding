#include<iostream>
using namespace std;
int main()
{
    long long int n,m,h,e,c,d;
    cin>>n>>m;
    if(n<m && n!=0)
    cout<<-1;
    else if(n==0)
    cout<<0<<"\n";
    else
    {
        c= n/2;
        d=n%2;
        if((c+d) % m ==0)
        cout<<c+d<<"\n";
        else
        {
            h= c/m;
            e= (h+1) *m -(c+d);
            if(e<=c)
            cout<<(h+1) *m<<"\n";
            else
            cout<<-1<<"\n";
        }
    }
    
}