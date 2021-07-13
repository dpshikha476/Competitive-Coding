    int kthLargest(Node *root, int k)
    {
        if(root==NULL)
        return -1;
        
        queue<Node*> q;
        q.push(root);
        vector<int> v;
        
        while(!q.empty())
        {
            Node* f=q.front();
            q.pop();
            
            v.push_back(f->data);
           
            if(f->left) 
            q.push(f->left);
            
            if(f->right)
            q.push(f->right);
        }
        
        sort(v.begin(),v.end());
        
        if(v.size()>=k)
        return v[v.size()-k];
        else
        return -1;
        
    }