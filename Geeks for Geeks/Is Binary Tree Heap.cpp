    bool convert(Node* root, vector<int> &v)
    {
        queue<Node*> q;
        q.push(root);
        bool flag=false;
        
        while(!q.empty())
        {
            Node* f=q.front();
            q.pop();
            
            v.push_back(f->data);
            
            if(f->left)
            {
                if(flag || f->left->data >=f->data)
                return false;
                
                q.push(f->left);
            }
            else
            {
                flag=true;
            }
            
            if(f->right)
            {
                if(flag || f->right->data >=f->data)
                return false;
                
                q.push(f->right);
            }
            else
            {
                flag=true;
            }
            
            
        }
        
        return true;
        
    }
    
  
  
    bool isHeap(struct Node * tree)
    {
        if(tree==NULL)
        return false;
        
        vector<int> v;
        
        bool flag=convert(tree,v);

        return flag;
        
    }