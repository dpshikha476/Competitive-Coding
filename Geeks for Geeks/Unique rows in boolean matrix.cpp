struct Node
{
    Node* link[2];
    int end=0;
};

void solve(int a[MAX][MAX],int row,int col, Node* root,vector<vector<int>> &ans)
{
    vector<int> temp;
    
    for(int i=0;i<col;i++)
    {
        int n=a[row][i];
        temp.push_back(n);
        
        if(!root->link[n])
        root->link[n]=new Node();
        
        root=root->link[n];
    }
    
    root->end++;
    
    if(root->end==1)
    ans.push_back(temp);
}

vector<vector<int>> uniqueRow(int a[MAX][MAX],int row,int col)
{
    Node* root=new Node();
    vector<vector<int>> ans;
    
    for(int i=0;i<row;i++)
        solve(a,i,col,root,ans);
        
    return ans;
}