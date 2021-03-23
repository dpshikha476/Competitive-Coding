#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    long long int n,q,m,k,min,l,r,i;
    cin>>n;
    long long int a[n];
    for(i=0;i<n;i++)
    cin>>a[i];
    sort(a,a+n);

    cin>>q;

    while(q--)
    {
        min=-1;
        cin>>k;

            l=0;
            r=n-1;
            while(l<=r)
            {
                m=l+(r-l)/2;

                if(a[m]<k)
                {
                    min=m;
                    l=m+1;
                }
                else
                r=m-1;
            }
        
            cout<<min+1<<"\n";
        
    }
}