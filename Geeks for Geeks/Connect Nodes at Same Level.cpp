    void connect(Node *root)
    {
        if(root==NULL)
        return;
        
        queue<Node*> q,s;
        q.push(root);
        
        while(!q.empty())
        {
            int n=q.size();
            
            for(int i=0;i<n;i++)
            {
                Node* f=q.front();
                q.pop();
                
                s.push(f);
                
                if(f->left)
                q.push(f->left);
                
                if(f->right)
                q.push(f->right);
                
            }
            
            Node* c=s.front();
            s.pop();
            while(s.size()>=1)
            {
                Node* p=s.front();
                s.pop();
                
                c->nextRight=p;
                c=p;
            }
            c->nextRight=NULL;
            
        }
        
    } 