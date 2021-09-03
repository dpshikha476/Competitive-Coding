
int transitionPoint(int a[], int n) 
{
    for(int i=0;i<n;i++)
        if(a[i]==1)
            return i;
    
    return -1;
}