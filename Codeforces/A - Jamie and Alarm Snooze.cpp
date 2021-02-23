#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
  
   long long int x,i,a,b,t;
   cin>>x;
   cin>>a>>b;
   t= a*60 +b;
   for(i=0;;i++)
   {
		long long int h = t / 60, m = t % 60;
		if(h / 10 == 7 || h % 10 == 7 || m / 10 == 7 || m % 10 == 7)
		 	{
		 	    cout<<i<<"\n";
		 	    break;
		 	}
		t = (t - x + 1440) % 1440;
	}
}