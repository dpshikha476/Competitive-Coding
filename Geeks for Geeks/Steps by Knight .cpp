	int minStepToReachTarget(vector<int>&KnightPos,vector<int>&TargetPos,int n)
	{
	    int a[1001][1001];
	    memset(a,-1,sizeof(a));
	  
	    queue<pair<int,int>> q;
	    int x1=KnightPos[0];
	    int y1=KnightPos[1];
	    int x2=TargetPos[0];
	    int y2=TargetPos[1];
	    
	    if(x1==x2 && y1==y2)
	    return 0;
	    
	    q.push({x1-1,y1-1});
	    a[x1-1][y1-1]=0;
	    
	    while(!q.empty())
	    {
	        auto p=q.front();
	        int i=p.first;
	        int j=p.second;
	        q.pop();
	        
	        if(i+1>=0 && j+2>=0 && i+1<n && j+2<n && a[i+1][j+2]==-1)
	        {
	            a[i+1][j+2]=a[i][j]+1;
	            q.push({i+1,j+2});
	        }
	        if(i-1>=0 && j+2>=0 && i-1<n && j+2<n && a[i-1][j+2]==-1)
	        {
	            a[i-1][j+2]=a[i][j]+1;
	            q.push({i-1,j+2});
	        }
	        if(i+1>=0 && j-2>=0 && i+1<n && j-2<n && a[i+1][j-2]==-1)
	        {
	            a[i+1][j-2]=a[i][j]+1;
	            q.push({i+1,j-2});
	        }
	        if(i-1>=0 && j-2>=0 && i-1<n && j-2<n && a[i-1][j-2]==-1)
	        {
	            a[i-1][j-2]=a[i][j]+1;
	            q.push({i-1,j-2});
	        }
	        if(i+2>=0 && j+1>=0 && i+2<n && j+1<n && a[i+2][j+1]==-1)
	        {
	            a[i+2][j+1]=a[i][j]+1;
	            q.push({i+2,j+1});
	        }
	        if(i+2>=0 && j-1>=0 && i+2<n && j-1<n && a[i+2][j-1]==-1)
	        {
	            a[i+2][j-1]=a[i][j]+1;
	            q.push({i+2,j-1});
	        }
	        if(i-2>=0 && j+1>=0 && i-2<n && j+1<n && a[i-2][j+1]==-1)
	        {
	            a[i-2][j+1]=a[i][j]+1;
	            q.push({i-2,j+1});
	        }
	        if(i-2>=0 && j-1>=0 && i-2<n && j-1<n && a[i-2][j-1]==-1)
	        {
	            a[i-2][j-1]=a[i][j]+1;
	            q.push({i-2,j-1});
	        }
	        
	    }
	    
	    return a[x2-1][y2-1];
	    
	}