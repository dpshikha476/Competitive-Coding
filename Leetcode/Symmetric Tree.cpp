 
    bool mirror(TreeNode* a,TreeNode* b)
    {
        if(a==NULL && b==NULL)
            return true; 
        
        if(a==NULL || b==NULL)
            return false;
        
        if(a->val==b->val && mirror(a->left,b->right) && mirror(a->right, b->left))
            return true;
        
        return false;
    }
    
    bool isSymmetric(TreeNode* root) 
    {
        if(root==NULL)
            return true;
        
        if(mirror(root->left, root->right))
            return true;
        
        return false;
        
        
    }