int LCSof3 (string a, string b, string c, int n1, int n2, int n3)
{
    int t[n1+1][n2+1][n3+1],i,j,k;
    memset(t,0,sizeof(t));
    
    for(i=1;i<=n1;i++)
    {
        for(j=1;j<=n2;j++)
        {
            for(k=1;k<=n3;k++)
            {
                if(a[i-1]==b[j-1] && b[j-1]==c[k-1])
                t[i][j][k]=1+t[i-1][j-1][k-1];
                else
                t[i][j][k]=max(t[i-1][j][k],max(t[i][j-1][k],t[i][j][k-1]));
            }
        }
    }
    
    return t[n1][n2][n3];
    
}