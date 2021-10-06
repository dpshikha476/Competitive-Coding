long long int count(long long int n)
{
	long long int i,j,t[4][n+1],a[3]={3,5,10};          
	
	for(i=0;i<4;i++)
	{
	    for(j=0;j<n+1;j++)
	    {
	        if(i==0)
	        t[i][j]=0;
	        
	        if(j==0)
	        t[i][j]=1;
	    }
	}
	
	for(i=1;i<4;i++)
	{
	    for(j=1;j<n+1;j++)
	    {
	        if(a[i-1]<=j)
	        t[i][j]=t[i][j-a[i-1]]+t[i-1][j];
	        else
	        t[i][j]=t[i-1][j];

	    }
	}
	
	return t[3][n];
}