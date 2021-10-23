int Solution::threeSumClosest(vector<int> &a, int b) 
{
    sort(a.begin(),a.end());
    int i,j,k,n=a.size(),m,s=INT_MAX,ans,x;

    for(k=0;k<n-2;k++)
    {
        i=k+1;
        j=n-1;
        x=b-a[k];
        while(i<j)
        {
            m=abs(x-(a[i]+a[j]));
            if(m<s)
            {
                s=m;
                ans=a[i]+a[j]+a[k];
            }

            if(a[i]+a[j]==x)
            {
                return b;
            }
            else if(a[i]+a[j]>x)
            j--;
            else
            i++;
        }
    }

    return ans;
}
