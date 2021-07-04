

#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    lli t=1;
    while(t--)
    {
        lli n,i=0,ans;
        cin>>n;
        
        while(n> 5*ceil(pow(2,i)))
        {
            n-=5*ceil(pow(2,i));
            i++;
        }

        ans=(n-1)/ceil((pow(2,i)));
        
        if(ans==0)
        cout<<"Sheldon"<<"\n";
        else if(ans==1)
        cout<<"Leonard"<<"\n";
        else if(ans==2)
        cout<<"Penny"<<"\n";
        else if(ans==3)
        cout<<"Rajesh"<<"\n";
        else if(ans==4)
        cout<<"Howard"<<"\n";
    }
    
    return 0;
}