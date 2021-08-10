#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int a[4],c=0;
	    cin>>a[0]>>a[1]>>a[2]>>a[3];
	    
	    sort(a,a+4);
	    
	    unordered_map<int,int> m;
	    
	    for(int i=0;i<4;i++)
	    {
	        m[a[i]]++;
	    }
	    
	    for(auto it=m.begin();it!=m.end();it++)
	    {
	        c++;
	    }
	    
	    if(c==1)
	    cout<<0<<"\n";
	    else if(c==2)
	    {
	        if(a[0]==a[1] && a[2]==a[3])
	        cout<<2<<"\n";
	        else
	        cout<<1<<"\n";
	    }
	    else if(c==3 || c==4)
	    cout<<2<<"\n";
	    
	    
	}
	return 0;
}
