#include<bits/stdc++.h>
#include<string.h>
#include<vector>
using namespace std;
typedef long long int lli;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    lli t;
    cin>>t;
    while(t--)
    {
        lli n,i,j;
        cin>>n;
        vector<lli> v;
        char a[n][n];
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                cin>>a[i][j];
                if(a[i][j]=='*')
                {
                v.push_back(i);
                v.push_back(j); 
                }
            }
        }
        
        if(v[0]==v[2])
        {
            if(v[0]<n-1)
            {
                a[n-1][v[1]]='*';
                a[n-1][v[3]]='*';
            }
            
            else
            {
                a[0][v[1]]='*';
                a[0][v[3]]='*';
            }
        }
        
        else if(v[1]==v[3])
        {
            if(v[1]<n-1)
            {
                a[v[0]][n-1]='*';
                a[v[2]][n-1]='*';
            }
            
            else
            {
                a[v[0]][0]='*';
                a[v[2]][0]='*';
            }
        }
        
        else
        {
            a[v[0]][v[3]]='*';
            a[v[2]][v[1]]='*';
        }
        
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            cout<<a[i][j];
            
            cout<<"\n";
        }
       
    }
    
}
