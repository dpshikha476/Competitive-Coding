		int LongestRepeatingSubsequence(string s)
		{
		    int i,j,n=s.length();
		    int t[n+1][n+1];
		    
		    for(i=0;i<n+1;i++)
		    {
		        for(j=0;j<n+1;j++)
		        {
		            t[i][j]=0;
		        }
		    }
		    
		    for(i=1;i<n+1;i++)
		    {
		        for(j=1;j<n+1;j++)
		        {
		            if(s[i-1]==s[j-1] && i!=j)
		            t[i][j]=1+t[i-1][j-1];
		            else
		            t[i][j]=max(t[i-1][j],t[i][j-1]);
		        }
		    }
		    
		    return t[n][n];
		    
		}