int height(struct Node* node)
{
    if(node==NULL)
    return 0;
    
    int lheight=height(node->left);
    int rheight=height(node->right);
    
    return 1+max(lheight,rheight);
}

int diameter(struct Node* root) 
{
    if(root==NULL)
    return 0;
    
    int lh=height(root->left);
    int rh=height(root->right);
    
    int ld=diameter(root->left);
    int rd=diameter(root->right);
    
    return max(lh+rh+1, max(ld,rd));
}