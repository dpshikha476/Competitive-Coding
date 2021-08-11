int rowWithMax1s(vector<vector<int> > a, int n, int m) 
	{
	    int i,j,ma=0,k=-1;
	    
	    for(i=0;i<n;i++)
	    {
	        for(j=0;j<m;j++)
	        {
	            if(a[i][j]==1)
	            {
	                if(ma<m-j)
	                {
	                    ma=m-j;
	                    k=i;
	                }
	                break;
	            }
	        }
	    }
	    
	    return k;
	}