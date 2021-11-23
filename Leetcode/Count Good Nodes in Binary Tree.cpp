    int count=0;
    int goodNodes(TreeNode* root) 
    {
        solve(root,INT_MIN);
        return count;
    }
    
    int solve(TreeNode* root, int max)
    {
        if(root==NULL)
            return 0;
        
        if(max<=root->val)
        {
            max=root->val;
            count++;
        }
        
        solve(root->left,max);
        solve(root->right,max);
        
        return max;
    }