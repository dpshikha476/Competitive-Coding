#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int d,i,j,c=0,x,y;
        cin>>d;
        for(i=d+1;;i++)
        {
            c=0;
            for(j=2;j<i;j++)
            {
                if(i%j==0)
                {
                    c=2;
                    break;
                }
            }
            if(c==0)
            {
                x=i;
                break;
            }
        }
        for(i=x+d;;i++)
        {
            c=0;
             for(j=2;j<i;j++)
            {
                if(i%j==0)
                {
                    c=2;
                    break;
                }
            }
            if(c==0)
            {
                y=i;
                break;
            }
        }
        cout<<x*y<<"\n";
    }
}