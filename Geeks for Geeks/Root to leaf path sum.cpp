bool hasPathSum(Node *root, int s) 
    {
        int ans=0,c=s-root->data;
        
        if(c==0 && root->left==NULL && root->right==NULL)
        return 1;
        
        if(root->left)
        ans=ans|| hasPathSum(root->left,c);
        
        if(root->right)
        ans=ans|| hasPathSum(root->right,c);
        
        return ans;
        
    }