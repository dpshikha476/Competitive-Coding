vector<vector<int>> ans;
    
    void sum(TreeNode* root, int t, int s, vector<int> v)
    {
        if(root==NULL)
            return;
        
        if(root->left==NULL && root->right==NULL)
        {
            if(s+root->val==t)
            {
                v.push_back(root->val);
                ans.push_back(v);
            }
            return;
        }
        
        s+=root->val;
        v.push_back(root->val);
        
        if(root->left)
            sum(root->left,t,s,v);
        
        if(root->right)
            sum(root->right,t,s,v);
        
    }
    
    vector<vector<int>> pathSum(TreeNode* root, int t) 
    {
        vector<int> v;
        int s=0;
        
        sum(root,t,s,v);
        
        return ans;
    }