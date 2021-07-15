    void fillLeft(Node* root, vector<int> &v)
    {
        if(root==NULL)
        return;
        
        if(root->left)
        {
            v.push_back(root->data);
            fillLeft(root->left, v);
        }
        else if(root->right)
        {
            v.push_back(root->data);
            fillLeft(root->right, v);
        }
        
    }
    
    void fillRight(Node* root, vector<int> &v)
    {
        if(root==NULL)
        return;
        
        if(root->right)
        {
            fillRight(root->right, v);
            v.push_back(root->data);
        }
        else if(root->left)
        {
            fillRight(root->left, v);
            v.push_back(root->data);
        }
        
    }
    
    void fillLeaves(Node* root, vector<int> &v)
    {
        if(root==NULL)
        return;
        
        fillLeaves(root->left, v);
        
        if(root->left==NULL && root->right==NULL)
        v.push_back(root->data);
        
        fillLeaves(root->right, v);
        
        
    }
    
    vector <int> printBoundary(Node *root)
    {
        vector<int> v;
        
        if(root==NULL)
        return v;
        
        v.push_back(root->data);
        
        fillLeft(root->left,v);
        
        fillLeaves(root->left,v);
        fillLeaves(root->right,v);
        
        fillRight(root->right,v);
        
        return v;
        
    }