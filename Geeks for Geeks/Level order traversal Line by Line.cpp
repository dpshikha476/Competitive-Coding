vector<vector<int>> levelOrder(Node* node)
{
    vector<vector<int>> v;
    queue<Node*> q;
    
    q.push(node);
    
    while(!q.empty())
    {
        int n=q.size();
        vector<int> v1;
        
        for(int i=0;i<n;i++)
        {
            Node* f=q.front();
            q.pop();
            
            v1.push_back(f->data);
            
            if(f->left)
            q.push(f->left);
            
            if(f->right)
            q.push(f->right);
            
        }
        
        v.push_back(v1);
    }
    
    return v;
    
    
}