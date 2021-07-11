int height(Node* node)
{
    if(node==NULL)
    return 0;
    
    return 1+max(height(node->right),height(node->left));
}

bool isBalanced(Node *root)
{   
    if(root==NULL)
    return true;
    
    int lh=height(root->left);
    int rh=height(root->right);
    
    if(abs(lh-rh)<=1 && isBalanced(root->left) && isBalanced(root->right))
    return true;
    
    
    return false;
    
}