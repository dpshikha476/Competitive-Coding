int height(TreeNode* root)
    {
        if(root==NULL)
            return 0;
        
        int l=height(root->left);
        int r=height(root->right);
        
        return max(l,r)+1;
    }
    
    bool isBalanced(TreeNode* root) 
    {
        if(root==NULL)
            return true;
        
        int lh=height(root->left);
        int rh=height(root->right);
        
        if(abs(lh-rh)<=1 && isBalanced(root->left) && isBalanced(root->right))
            return true;
        
        return false;
    }