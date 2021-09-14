 bool isValidSudoku(vector<vector<char>>& a) 
    {
        
        int i,j;
        vector<set<int>> row(9),col(9),block(9);
        
        for(i=0;i<9;i++)
        {
            for(j=0;j<9;j++)
            {
                if(a[i][j]=='.')
                    continue;
                
                int k=a[i][j]-'0';
                
                if(row[i].count(k) || col[j].count(k) || block[(i/3)*3 +j/3].count(k))
                    return false;
                
                row[i].insert(k);
                col[j].insert(k);
                block[(i/3)*3 +j/3].insert(k);
                
            }
        }
        
        return true;
        
    }