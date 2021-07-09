#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

lli gcd(lli a, lli b)
{
    if(a==0)
    return b;
    
    return gcd(b%a,a);
}

int main()
{
    lli l,r,a,b,c,i,flag=0,j;
    cin>>l>>r;
    
    if(r-l<2)
    cout<<-1<<"\n";
    else
    {
        for(j=0;j+l<=r-2;j++)
        {
            a=l+j;
            b=a+1;
        
            for(i=1;;i++)
            {
                if(i+b>r)
                break;
                
                if(gcd(b,i+b)==1 && gcd(a,i+b)!=1)
                {
                    flag=1;
                    break;
                }
            }
            
            if(flag==1)
            break;
            
        }
        
        if(flag==1)
        {
            c=i+b;
            cout<<a<<" "<<b<<" "<<c;
        }
        else
        cout<<-1<<"\n";
        
    }
    
    return 0;
 
}