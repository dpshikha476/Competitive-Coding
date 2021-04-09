#include<bits/stdc++.h>
#include<vector>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long int n,a=0,b=0,i,j,d=0;
    cin>>n;
    if(n<4)
    cout<<-1;
 
    else
    {
        for(i= n/7 ;i>=0;i--)
        {
            j= n-(i*7);
            if(j%4==0)
            {
                b=j/4;
                a=i;
                d=1;
               break;
            }
        }
       if(d==1)
       {
            while(b--)
            cout<<4;
            
            while(a--)
            cout<<7; 
       }
       
       else
       cout<<-1;
    }
    
}
