bool isSafe(int node,int v, int color, int col[], bool graph[][101])
{
    for(int i=0;i<v;i++)
    {
        if(i!=node && graph[i][node]==1 && col[i]==color)
        return false;
    }
    
    return true;
}

bool solve(int node,int m,int v, int col[], bool graph[][101])
{
    if(node==v)
    return true;
    
    for(int i=1;i<=m;i++)
    {
        if(isSafe(node,v,i,col,graph))
        {
            col[node]=i;
            if(solve(node+1,m,v,col,graph))
            return true;
            col[node]=0;
        }
    }
    
    return false;
}


bool graphColoring(bool graph[101][101], int m, int v)
{
    int col[v]={0};
    
    if(solve(0,m,v,col,graph))
    return true;
    
    return false;
}