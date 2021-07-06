vector<int> reverseLevelOrder(Node *root)
{
    vector<int> h;
    queue<Node*> q;
    q.push(root);
       
    while(!q.empty())
    {
        Node* f= q.front();
        q.pop();
        h.push_back(f->data);
        
        if(f->right)
        {
            q.push(f->right);
        }
           
        if(f->left)
        {
            q.push(f->left);
        }

           
    }
    
    reverse(h.begin(),h.end());
    
    return h;
}