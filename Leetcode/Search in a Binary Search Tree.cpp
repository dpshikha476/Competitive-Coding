TreeNode* searchBST(TreeNode* root, int val) 
    {
        if(root==NULL)
            return root;
        
        TreeNode* cur;
        if(root->val==val)
        {
            cur=root;
            return cur;
        }
        
        else if(root->val>val)
            cur=searchBST(root->left,val);
        else if(root->val<val)
            cur=searchBST(root->right,val);
        
        return cur;
        
    }