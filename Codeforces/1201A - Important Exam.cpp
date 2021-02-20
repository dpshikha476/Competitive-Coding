#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,i,j;
    cin>>n>>m;
    char c[n][m];
    for(i=0;i<n;i++)
    for(j=0;j<m;j++)
    cin>>c[i][j];
    long long int a[m],s=0;
    for(i=0;i<m;i++)
    cin>>a[i];
    
    for(i=0;i<m;i++)
    {
       long long int b[5]={0};
        for(j=0;j<n;j++)
        {
            b[c[j][i]-'A']++;
        }
        s=s+ a[i]* max(b[0],max(b[1],max(b[2],max(b[3],b[4]))));
 
    }
    cout<<s<<"\n";
}