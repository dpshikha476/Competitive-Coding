    int maxArea(int mat[MAX][MAX], int n, int m) 
    {
        int i,j,ma=INT_MIN,area;
        int a[m];
        
        for(i=0;i<n;i++)
        {
            if(i!=0)
            {
                for(j=0;j<m;j++)
                {
                    if(mat[i][j]!=0)
                    a[j]+=mat[i][j];
                    else
                    a[j]=0;
                }
            }
            else
            {
                for(j=0;j<m;j++)
                {
                    a[j]=mat[i][j];
                }
            }
            
            stack<int> s;
            j=0;
            
            while(j<m)
            {
                if(s.empty() || a[s.top()]<=a[j])
                s.push(j++);
                else
                {
                    int t=s.top();
                    s.pop();
                    area=a[t]*(s.empty()?j:j-s.top()-1);
                    
                    ma=max(ma,area);
                }
            }
            
            while(!s.empty())
            {
                int t=s.top();
                s.pop();
                area=a[t]*(s.empty()?j:j-s.top()-1);
                
                ma=max(ma,area);
            }
            
        }
        
        return ma;
        
    }