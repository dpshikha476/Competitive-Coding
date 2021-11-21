vector<int> findMode(TreeNode* root) 
    {
        vector<int> v;
        
        if(root==NULL)
            return v;
        
        int i,a=INT_MIN;
        queue<TreeNode*> q;
        q.push(root);
        unordered_map<int,int> m;
        
        while(!q.empty())
        {
            TreeNode* f=q.front();
            q.pop();
            
            m[f->val]++;
            a=max(a,m[f->val]);
            
            if(f->left)
                q.push(f->left);
            if(f->right)
                q.push(f->right);
            
        }
        
        for(auto it=m.begin();it!=m.end();it++)
        {
            if(it->second==a)
                v.push_back(it->first);
        }
        
        return v;
    }