vector<int> findSpiral(Node *root)
{
    vector<int> v;
    
    if(root==NULL)
    return v;
    
    queue<Node*> q;
    q.push(root);
    int flag=0,j=0;
    
    while(!q.empty())
    {
        int n=q.size();
        for(int i=0;i<n;i++)
        {
            Node* f=q.front();
            q.pop();
            
            v.push_back(f->data);
            
            if(f->left)
            q.push(f->left);
            
            if(f->right)
            q.push(f->right);
        }
        
        if(flag==0)
        reverse(v.begin()+j,v.end());
        j+=n;
        flag=!flag;
        
    }
    
    return v;
    
}