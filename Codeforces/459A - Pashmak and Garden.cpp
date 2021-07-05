
#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;


int main()
{
    lli x1,y1,x2,y2,x3,x4,y3,y4,a;
    cin>>x1>>y1>>x2>>y2;
    
    if (x1!=x2 && y1!=y2 && abs(x1-x2)!=abs(y1-y2))
    cout << -1;
    
    else if(x1==x2)
    {
        a=abs(y1-y2);
        cout<<x1+a<<" "<<y1<<" "<<x2+a<<" "<<y2;
    }
    
    else if(y1==y2)
    {
        a=abs(x1-x2);
        cout<<x1<<" "<<y1+a<<" "<<x2<<" "<<y2+a;
    }

    else
    cout<<x1<<" "<<y2<<" "<<x2<<" "<<y1;
    
    
   
    
    return 0;

}
