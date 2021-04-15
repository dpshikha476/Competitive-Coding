void rotate(int a[], int n)
{
    long long int i;
    for(i=n-1;i>0;i--)
    {
        int t=a[i];
        a[i]=a[i-1];
        a[i-1]=t;
    }
    
}