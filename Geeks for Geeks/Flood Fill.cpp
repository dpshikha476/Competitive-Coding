    void dfs(int i, int j, vector<vector<int>>& image, int n, int m, int newColor, int present)
    {
        if(i<0 || j<0 || i>=n ||j>=m)
            return;
        if(image[i][j]!=present)
            return;
        
        image[i][j]=newColor;
        
        dfs(i+1,j,image,n,m,newColor,present);
        dfs(i,j+1,image,n,m,newColor,present);
        dfs(i-1,j,image,n,m,newColor,present);
        dfs(i,j-1,image,n,m,newColor,present);
        
    }
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) 
    {
        int n=image.size(),m=image[0].size();

        if(image[sr][sc]==newColor)
            return image;
        
        dfs(sr,sc,image,n,m,newColor,image[sr][sc]);
        
        return image;
        
    }