void inorder(Node* root,  unordered_set<int> &m, unordered_set<int> &l)
{
    if(root==NULL)
    return;
    
    inorder(root->left,m,l);
    
    m.insert(root->data);
    
    if(root->right==NULL && root->left==NULL) 
    l.insert(root->data);
    
    inorder(root->right,m,l);
    
}

bool isDeadEnd(Node *root)
{
    
    bool flag=false;
    unordered_set<int> m,l;
    m.insert(0);
    inorder(root,m,l);
    
    for(auto it=l.begin();it!=l.end();it++)
    {
        if(m.find(*it+1)!=m.end() && m.find(*it-1)!=m.end())
        {
            flag=true;
            break;
        }
    }
    
    return flag;
    
}