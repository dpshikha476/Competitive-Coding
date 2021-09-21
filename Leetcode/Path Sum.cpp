bool hasPathSum(TreeNode* root, int targetSum) 
    {
        if(root==NULL)
            return false;
        
        if(root->left==NULL && root->right==NULL && root->val==targetSum)
            return true;
        
         return hasPathSum(root->left,targetSum-root->val) || 
             hasPathSum(root->right,targetSum-root->val);
        
    }