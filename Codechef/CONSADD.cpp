#include<bits/stdc++.h>
#include<vector>
using namespace std;
typedef long long int lli;

bool solve(long long int r,long long int c, long long int a[1001][1001], long long int b[1001][1001])
{
   lli i,j;
   for(i=0;i<r;i++)
   {
       for(j=0;j<c;j++)
       {
           if(a[i][j]!=b[i][j])
           return false;
       }
   } 
    
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int r,c,x,i,j,d,k;
       cin>>r>>c>>x;
       long long int a[1001][1001],b[1001][1001];
       for(i=0;i<r;i++)
        {
        for(j=0;j<c;j++)
            cin>>a[i][j];
        }
            
        for(i=0;i<r;i++)
            {
            for(j=0;j<c;j++)
                cin>>b[i][j];
            }
          
          if(r<x && c<x)
          {
            if(solve(r,c,a,b))
            cout<<"YES"<<"\n";
            else 
            cout<<"NO"<<"\n";   
          }
          
          else if(r<x)
          {
              for(i=0;i<r;i++)
              {
                for(j=0;j<c-x+1;j++)
                {
                    if(a[i][j]==b[i][j])
                    continue;
                    else 
                    {
                        d=b[i][j]-a[i][j];
                        a[i][j]= a[i][j]+d;
                        k=1;
                        while(k<x)
                        {
                            a[i][j+k]=a[i][j+k]+d;
                            k++;
                        }
                    }
                }
              }
              if(solve(r,c,a,b))
              cout<<"YES"<<"\n";
              else 
              cout<<"NO"<<"\n";
          }
          
          else if(c<x)
          {
                for(i=0;i<c;i++)
                {
                        for(j=0;j<r-x+1;j++)
                        {
                            if(a[j][i]==b[j][i])
                            continue;
                            else 
                            {
                                d=b[j][i]-a[j][i];
                                a[j][i]= a[j][i]+d;
                                k=1;
                                while(k<x)
                                {
                                    a[j+k][i]=a[j+k][i]+d;
                                    k++;
                                }
                            }
                        }
                }
              if(solve(r,c,a,b))
              cout<<"YES"<<"\n";
              else 
              cout<<"NO"<<"\n";
          }  
          
          else if(c>=x && r>=x)
          {
                for(i=0;i<r;i++)
                {
                    for(j=0;j<c-x+1;j++)
                    {
                        if(a[i][j]==b[i][j])
                        continue;
                        else 
                        {
                            d=b[i][j]-a[i][j];
                            a[i][j]= a[i][j]+d;
                            k=1;
                            while(k<x)
                            {
                                a[i][j+k]=a[i][j+k]+d;
                                k++;
                            }
                        }
                    }
                }
                
                for(i=0;i<c;i++)
                {
                    for(j=0;j<r-x+1;j++)
                    {
                        if(a[j][i]==b[j][i])
                        continue;
                        else 
                        {
                            d=b[j][i]-a[j][i];
                            a[j][i]= a[j][i]+d;
                            k=1;
                            while(k<x)
                            {
                                a[j+k][i]=a[j+k][i]+d;
                                k++;
                            }
                        }
                    }
                }
                
                if(solve(r,c,a,b))
                cout<<"YES"<<"\n";
                else 
                cout<<"NO"<<"\n";
          }
        
    }
    
}
