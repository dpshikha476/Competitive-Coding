void mirror(Node* root) 
    {
        if(root==NULL)
        return;
        
        if(root->right && root->left)
        {
            swap(root->right,root->left);
        }
        
        else if(root->right==NULL)
        {
            root->right=root->left;
            root->left=NULL;
        }
        else if(root->left==NULL)
        {
            root->left=root->right;
            root->right=NULL;
        }
        
        mirror(root->right);
        mirror(root->left);
    }