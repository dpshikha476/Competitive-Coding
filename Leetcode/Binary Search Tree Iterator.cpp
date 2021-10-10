    int i=0;
    vector<int> v;
    
    void inorder(TreeNode* root)
    {
        if(root==NULL)
            return;
        
        inorder(root->left);
        v.push_back(root->val);
        inorder(root->right);
    }
    
    BSTIterator(TreeNode* root) 
    {
        inorder(root);    
    }
    
    int next() 
    {
       return v[i++];
    }
    
    bool hasNext() 
    {
        if(i<v.size())
            return 1;
        
        return 0;
    }