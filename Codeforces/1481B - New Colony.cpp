 
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
       long long int n,k;
       cin>>n>>k;
        long long int i,j,c=0;
 
        long long int arr[n];
        for(i=0;i<n;i++)
        cin>>arr[i];
        while(k--)
        {
            for(j=0;j<n-1;j++)
            {
                if(arr[j+1]>arr[j])
                {
                    arr[j]=arr[j]+1;
                    c=1;
                    break;
                }
                else
                continue;
            }
            if(c==0 || j==n-1)
           {
                cout<< -1<<"\n";
                c=0;
                break;
            }
        }
        if(c==1)
        cout<<j+1<<"\n";
    }
}