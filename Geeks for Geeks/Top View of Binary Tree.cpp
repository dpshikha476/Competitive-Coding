    void fillMap(Node* root, map<int, pair<int, int>> &m, int l, int d)
    {
        if(root==NULL)
        return;
        
        if(m.count(d)==0)
        m[d]=make_pair(root->data,l);
        
        else if(m[d].second >l)
        m[d]=make_pair(root->data,l);
        
        fillMap(root->left, m, l+1, d-1);
        fillMap(root->right, m, l+1, d+1);
    }
    
    vector<int> topView(Node *root)
    {
        vector<int> v;
        if(root==NULL)
        return v;
        
        
        map<int, pair<int, int>> m;
        
        fillMap(root, m, 0, 0);
        
        
        for(auto it=m.begin();it!=m.end();it++)
        {
            v.push_back(it->second.first);
        }
        
        return v;
    }