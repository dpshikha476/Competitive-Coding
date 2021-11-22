    bool isCousins(TreeNode* root, int x, int y) 
    {
        int val=0;
        queue<TreeNode*> q;
        q.push(root);
        unordered_map<int,pair<int,TreeNode*>> m;
        m[root->val].first=val;
        m[root->val].second=root;
        
        while(!q.empty())
        {
            TreeNode* f=q.front();
            q.pop();
            
            
            if(f->left)
            {
                q.push(f->left);
                m[f->left->val].first=m[f->val].first +1;
                m[f->left->val].second=f;
            }
            
            if(f->right)
            {
                q.push(f->right);
                m[f->right->val].first=m[f->val].first +1;
                m[f->right->val].second=f;
            }
        }
        
        if(m[x].first==m[y].first && m[x].second!=m[y].second)
            return true;
        
        return false;
        
    }