vector<vector<int>> levelOrder(TreeNode* root) 
    {
        vector<vector<int>> v;
        
        if(root==NULL)
            return v;
        
        queue<TreeNode*> s;
        s.push(root);
        
        while(!s.empty())
        {
            vector<int> a;
            int n=s.size();
            
            for(int i=0;i<n;i++)
            {
                 TreeNode* f=s.front();
                 s.pop();
                
                 a.push_back(f->val);
                
                 if(f->left)
                     s.push(f->left);
                
                 if(f->right)
                     s.push(f->right);
            }
            
            v.push_back(a);
            a.clear();
            
        }
        
        return v;
        
    }