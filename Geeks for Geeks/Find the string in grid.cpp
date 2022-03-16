 bool isPossible(vector<vector<char>>grid, string word,int i,int j,vector<vector<int>> dirs)
    {
        
        int n=grid.size();
        int m=grid[0].size();
        
        for(auto dir:dirs)
        {
            int newi=i;
            int newj=j;
            int c=0;
            
            while(newi>=0 && newj>=0 && newi<n && newj<m && c<word.length() && grid[newi][newj]==word[c])
            {
                newi=newi+dir[0];
                newj=newj+dir[1];
                c++;
            }
            if(c==word.length()){
                return true;
            }
                
        }
        
        return false;
    }
    
	vector<vector<int>> searchWord(vector<vector<char>>grid, string word)
	{
	    vector<vector<int>> ans;
        int n=grid.size();
        int m=grid[0].size();
        
        vector<vector<int>> dirs={{-1,0},{0,-1},{-1,-1},{-1,1},{1,-1},{1,0},{1,1},{0,1}};
       
        for(int i=0;i<n;i++)
        {
           for(int j=0;j<m;j++)
           {
               if(grid[i][j]==word[0] && isPossible(grid,word,i,j,dirs))
                   ans.push_back({i,j});
           }
        }
        
        return ans;
	    
	}