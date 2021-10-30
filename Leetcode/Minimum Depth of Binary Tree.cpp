int minDepth(TreeNode* root) 
    {
        if(root==NULL)
            return 0;
        
        int lh=minDepth(root->left);
        int rh=minDepth(root->right);
        
        if(lh==0 || rh==0)
            return max(lh,rh)+1;
        
        return min(lh,rh)+1;
    }