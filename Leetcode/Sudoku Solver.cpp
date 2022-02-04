    bool isvalid(char k,int row,int col,vector<vector<char>> bor)
    {
        for(int i=0;i<9;i++)
        {
            if(bor[i][col]==k)
                return false;
            if(bor[row][i]==k)
                return false;
            if(bor[3*(row/3) +i/3][3*(col/3)+i%3]==k)
                return false;
        }
        
        return true;
    }
    
    bool solve(vector<vector<char>>& bor)
    {
        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                if(bor[i][j]=='.')
                {
                    for(char k='1';k<='9';k++)
                    {
                        if(isvalid(k,i,j,bor))
                        {
                            bor[i][j]=k;
                            if(solve(bor))
                                return true;
                            else
                                bor[i][j]='.';
                        }
                    }
                    return false;
                }
                
            }
        }
        
        return true;
    }
    
    void solveSudoku(vector<vector<char>>& bor) 
    {
        solve(bor);
    }