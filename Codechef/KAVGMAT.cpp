#include<bits/stdc++.h>
#include<vector>
typedef long long int lli;
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    lli t;
    cin>>t;
    while(t--)
    {
        lli n,m,k,i,j,u,ans=0,f;
        cin>>n>>m>>k;
        double a[n+1][m+1],p;
        for(i=0;i<=n;i++)
        {
            for(j=0;j<=m;j++)
            {
                if(i==0 || j==0)
                a[i][j]=0;
                else
                cin>>a[i][j];
            }

        }
        
        for(i=1;i<=n;i++)
        {
            p=0;
            for(j=1;j<=m;j++)
            {
                a[i][j]=a[i][j]+p;
                p=a[i][j];
            }
        }
        
        for(i=1;i<=m;i++)
        {
            p=0;
            for(j=1;j<=n;j++)
            {
                a[j][i]=a[j][i]+p;
                p=a[j][i];
            }
        }
        
        u= min(n,m);
        
        for(f=1;f<=u;f++)
        {
            for(i=f;i<=n;i++)
            {
                for(j=f;j<=m;j++)
                {
                    if( (a[i][j]+a[i-f][j-f]-a[i-f][j]-a[i][j-f])/(f*f) >=k )
                    ans++;
                }
            }
        }
        
        cout<<ans<<"\n";
        
    }
}