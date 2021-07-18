void inorder(Node* root, int &c, int l, int h)
{
    if(root==NULL)
    return;
    
    inorder(root->left,c,l,h);
    
    if(root->data>=l && root->data<=h)
    c++;
    
    inorder(root->right,c,l,h);
    
}

int getCount(Node *root, int l, int h)
{
    int c=0;
    
    inorder(root,c,l,h);
    
    return c;
}