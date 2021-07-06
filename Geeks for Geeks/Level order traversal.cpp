    vector<int> levelOrder(Node* node)
    {
       vector<int> v;
       queue<Node*> q;
       q.push(node);
       
       while(!q.empty())
       {
           Node* f= q.front();
           q.pop();
           v.push_back(f->data);
           
           if(f->left)
           q.push(f->left);
           
           if(f->right)
           q.push(f->right);
           
       }
       
       return v;
       
    }