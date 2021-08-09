#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int g1,s1,b1,g2,s2,b2,c1=0,c2=0;
        cin>>g1>>s1>>b1>>g2>>s2>>b2;
        
        c1=g1+b1+s1;
        c2=g2+s2+b2;
        
        if(c1>c2)
        cout<<1<<"\n";
        else
        cout<<2<<"\n";
        
    }
	return 0;
}
