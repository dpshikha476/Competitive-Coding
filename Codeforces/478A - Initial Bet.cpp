
#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;


int main()
{
    lli a[5],i,s=0;
    for(i=0;i<5;i++)
    {
        cin>>a[i];
        s+=a[i];
    }
    if(s%5==0 && s!=0)
    cout<<s/5<<"\n";
    else
    cout<<-1;
   
    return 0;

}
