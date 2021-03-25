#include <iostream>
using namespace std;

int main()

{

    long long int n,sum=0,pos=0;

    cin>>n;

    long long int a[n],min=1000000001;

    for(long long int i=0;i<n;i++)

    {

        cin>>a[i];

        sum+=a[i];

    }

    for(long long int i=0;i<n;i++)

    {

        if((sum-a[i])%7==0)

        {

            if(a[i]<min)

            {

            min=a[i];

            pos=i;

            }

        }

    }

    (pos==0)?cout<<"-1":cout<<pos;

}