    void level(Node* root, map<int,int> &m, int l)
    {
        if(root==NULL)
        return;
        
        level(root->left,m,l+1);
        
        if(root->left==NULL && root->right==NULL)
        m[l]=root->data;
        
        
        level(root->right,m,l+1);
        
    }
    bool check(Node *root)
    {
        if(root==NULL)
        return true;
        
        map<int,int> m;
        
        level(root, m, 0);
        
        int c=0;
        
        for(auto it=m.begin();it!=m.end();it++)
        {
            c++;
        }
        
        if(c>1)
        return false;
        else
        return true;
        
        
    }