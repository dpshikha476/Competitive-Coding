int snakesAndLadders(vector<vector<int>>& bor) 
    {
        int n=bor.size();
        int vis[401]={0};
        
        queue<pair<int,int>> q;
        q.push({1,0});
        
        while(!q.empty())
        {
            auto p=q.front();
            int node=p.first;
            int d=p.second;
            q.pop();
        
            for(int j=node+1;j<=node+6 && j<=n*n;j++)
            {
                if(vis[j]==0)
                {
                    cout<<j<<" ";
                    vis[j]=1;
                    int v;
                    int a=(j-1)/n;
                    int b=(a%2==0)?(j-1)%n:n-1-((j-1)%n);
                    if(bor[n-1-a][b]==-1)
                        v=j;
                    else
                        v=bor[n-1-a][b];
                    
                    if(v==n*n)
                        return d+1;
                    
                    q.push(make_pair(v,d+1));
                }
            }
        }
        return -1;
    }