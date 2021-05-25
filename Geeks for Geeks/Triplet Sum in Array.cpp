bool find3Numbers(int a[], int n, int x)
{
    int i,k,j;
    sort(a,a+n);
    
    for(i=0;i<n-2;i++)
    {
        j=i+1;
        k=n-1;
        while(j<k)
        {
            if(a[j]+a[k] == x-a[i])
            return true;
            else if(a[j]+a[k] >= x-a[i])
            k--;
            else if(a[j]+a[k] <= x-a[i])
            j++;
        }
    }
    
    return false;
}