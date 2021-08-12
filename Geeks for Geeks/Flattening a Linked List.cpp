Node* merge(Node* a, Node* b)
{
    if(a==NULL)
    return b;
    
    if(b==NULL)
    return a;
    
    Node* head;
    
    if(a->data<b->data)
    {
        head=a;
        head->bottom=merge(a->bottom,b);
    }
    
    else
    {
        head=b;
        head->bottom=merge(a,b->bottom);
    }
    
    head->next=NULL;
    return head;
    
}
    
Node *flatten(Node *root)
{
   if(root==NULL || root->next==NULL)
   return root;
   
   root->next=flatten(root->next);
   
   root=merge(root,root->next);
   
   return root;
}