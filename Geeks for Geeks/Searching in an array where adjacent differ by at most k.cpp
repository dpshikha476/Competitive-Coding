int search(int a[], int n, int x, int k)
{
    int ans=-1;
    int i=0;
    
    while(i<n)
    {
        if(a[i]==x)
            return i;
        else
            i+=max(1,abs((x-a[i])/k));
    }
    
    return ans;	
}   