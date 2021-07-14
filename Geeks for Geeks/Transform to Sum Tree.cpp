    int sumTree(Node* node)
    {
        if(node==NULL)
        return 0;
        
        int old_data=node->data;
        
        node->data=sumTree(node->left)+sumTree(node->right);
        
        return old_data+node->data;
    }
    
    void toSumTree(Node *root)
    {
        sumTree(root);
    }