    
    void inorder(struct Node* root, vector<int> &v)
    {
        if(root==NULL)
        return;
        
        if(root)
        {
            inorder(root->left,v);
            v.push_back(root->data);
            inorder(root->right,v);
        }
    }
    
    Node * bToDLL(Node *root)
    {
        vector<int> v;
        
        if(root==NULL)
        return NULL;
        
        inorder(root,v);
        
        Node* head= newNode(v[0]);
        Node* p=head;
        
        for(int i=1;i<v.size();i++)
        {
            Node* x=newNode(v[i]);
            p->right=x;
            x->left=p;
            p=x;
        }
        
        return head;
    }
    