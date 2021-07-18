void countNodes(Node* root, int &n)
{
    if(root==NULL)
    return;
    
    countNodes(root->left,n);
    n++;
    countNodes(root->right,n);
    
}

void find(Node* root, Node* &pre, Node* &cur, int k, int &c, bool &flag)
{
    if(root==NULL)
    return;
    
    find(root->left,pre,cur,k,c,flag);
    
    if(pre==NULL)
    {
        pre=root;
        c++;
    }
    
    else if(c==k)
    {
        cur=root;
        flag=true;
        c++;
        return;
    }
    
    else if(flag==false)
    {
        c++;
        pre=root;
    }
    
    find(root->right,pre,cur,k,c,flag);
}
 
 int findMedian(Node* root)
 {
     if(root==NULL)
     return -1;
     
     int n=0;
     countNodes(root,n);
     
     int k= (n/2)+1;
     bool flag=false;
     int c=1;
     
     Node* pre=NULL;
     Node* cur=NULL;
     
     find(root, pre,cur,k,c,flag);
     
     if(n%2==0)
     return ((pre->data+cur->data)*1.0)/(2*1.0);
     else
     return (cur->data)*1.0;
 }
 