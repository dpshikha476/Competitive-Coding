#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;


int main()
{
    lli s1,s2,s3,a,b,c;
    cin>>s1>>s2>>s3;
    
    a=sqrt((s1*s3)/s2);
    b=sqrt((s1*s2)/s3);
    c=sqrt((s2*s3)/s1);
    
    cout<<4*(a+b+c)<<"\n";
    
    return 0;
 
}
