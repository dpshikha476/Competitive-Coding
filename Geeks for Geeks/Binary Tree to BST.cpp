    void inorder(Node* root, vector<int> &v)
    {
        if(root==NULL)
        return;
        
        inorder(root->left,v);
        v.push_back(root->data);
        inorder(root->right,v);
        
    }
    
    void correct(Node* root, vector<int> v, int &i)
    {
        if(root==NULL)
        return;
        
        correct(root->left,v,i);
        
        root->data=v[i];
        i++;
        
        correct(root->right,v,i);
    }
    
    Node *binaryTreeToBST (Node *root)
    {
        vector<int> v;
        
        inorder(root, v);
        
        sort(v.begin(),v.end());
        
        int i=0;
        correct(root,v,i);
        
        return root;
        
    }