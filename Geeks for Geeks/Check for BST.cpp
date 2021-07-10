    bool helper(Node* root, int mi=INT_MIN, int ma=INT_MAX)
    {
        if(root==NULL)
        return true;
        
        bool left=helper(root->left, mi,root->data);
        bool right=helper(root->right,root->data, ma);
        
        if(left && right && root->data>mi && root->data<ma)
        return true;
        else
        return false;
        
    }
    
    bool isBST(Node* root) 
    {
        return helper(root);
        
    }