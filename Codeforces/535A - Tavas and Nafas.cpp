
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
    
    lli n,d;
    cin>>n;
    string t[]={"twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};
    string r[]={"ten", "eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
    string s[]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    
    if(n<10)
    cout<<s[n];
    else if(n>=10 && n<=19)
    cout<<r[n-10];
    else 
    {
        d=n/10;
        if(n%10 ==0)
        cout<<t[d-2];
        else
        cout<<t[d-2]<<"-"<<s[n%10];
    }
    
}
