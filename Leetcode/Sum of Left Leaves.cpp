    int sumOfLeftLeaves(TreeNode* root) 
    {
        int ans=0;
        queue<pair<TreeNode*,char>> q;
        q.push({root,'N'});
        
        while(!q.empty())
        {
            pair<TreeNode*,char> p=q.front();
            TreeNode* f=p.first;
            char c=p.second;
            q.pop();
            
            if(f->left)
                q.push({f->left,'L'});
            if(f->right)
                q.push({f->right,'R'});
            
            if(!f->left && !f->right && c=='L')
                ans=ans+f->val;
                
        }
        
        return ans;
    }