void Solution::rotate(vector<vector<int> > &a) 
{
    int i,j,n=a.size();

    for(i=0;i<n/2;i++)
    {
        for(j=i;j<n-1-i;j++)
        {
            int t=a[i][j];
            a[i][j]=a[n-1-j][i];
            a[n-1-j][i]=a[n-1-i][n-1-j];
            a[n-1-i][n-1-j]=a[j][n-1-i];
            a[j][n-1-i]=t;
        }
    }
    
}
