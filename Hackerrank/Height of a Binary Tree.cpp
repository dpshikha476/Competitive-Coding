    int height(Node* root) 
    {
        if(root==NULL)
        return 0;
        int m=0,c=0,d=0;
        if(root->left!=NULL)
        {
             c= 1+ height(root->left);
        }
        if(root->right!=NULL)
        {
             d= 1+height(root->right);
        }
        return max(c,d);
    }
