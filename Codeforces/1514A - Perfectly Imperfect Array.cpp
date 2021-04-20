#include<bits/stdc++.h>
#include<string.h>
#include<vector>
using namespace std;
typedef long long int lli;


bool checkperfectsquare(long long int n)
{

    if (ceil((double)sqrt(n)) == floor((double)sqrt(n))) 
    return true;
    else 
    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    lli t;
    cin>>t;
    while(t--)
    {
        lli n,i,d=0;
        cin>>n;
        lli a[n];
        for(i=0;i<n;i++)
        cin>>a[i]; 
        
        for(i=0;i<n;i++)
        {
            if(checkperfectsquare(a[i]))
            continue;
            else 
            {
                d=1;
                break;
            }
        }
        if(d==0)
        cout<<"NO"<<"\n";
        else
        cout<<"YES"<<"\n";
    }
}
