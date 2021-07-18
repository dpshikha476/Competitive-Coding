void inorder(Node* root, set<int> &s)
{
    if(root==NULL)
    return;
    
    inorder(root->left,s);
    s.insert(root->data);
    inorder(root->right,s);
    
}

int countPairs(Node* root1, Node* root2, int x)
{
    if(root1==NULL || root2==NULL)
    return 0;
    
    set<int> s1,s2;
    int c=0;
    
    inorder(root1,s1);
    inorder(root2,s2);
    
    for(auto itr=s1.begin();itr!=s1.end();itr++)
    {
        if(s2.find(x-(*itr))!=s2.end())
        c++;
    }
    
    return c;
}