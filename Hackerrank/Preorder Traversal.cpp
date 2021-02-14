void preOrder(Node *root) 
    {
        if(root==NULL)
        return;
        
            std::cout<<root->data<<" ";           
            preOrder(root->left);
            preOrder(root->right);
        
        
    }