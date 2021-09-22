TreeNode* insertIntoBST(TreeNode* root, int val) 
    {
        if(root==NULL)
        {
            TreeNode* n=new TreeNode(val);
            return n;
        }
        
        if(root->val>val)
            root->left=insertIntoBST(root->left,val);
        else
            root->right=insertIntoBST(root->right,val);
        
        return root;
        
    }