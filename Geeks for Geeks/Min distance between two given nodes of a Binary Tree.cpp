    Node* lca(Node* root ,int n1 ,int n2 )
    {
       if(root==NULL)
       return NULL;
       
       if(root->data==n1 || root->data==n2)
       return root;
       
       Node *lLca=lca(root->left,n1,n2);
       Node *rLca=lca(root->right,n1,n2);
       
       if(lLca && rLca)
       return root;
       
       return (lLca!=NULL)?lLca:rLca;
       
    }
    
    int findD(Node* root, int n, int level)
    {
        if(root==NULL)
        return -1;
        
        if(root->data==n)
        return level;
        
        int l=findD(root->left,n,level+1);
        
        return (l!=-1)?l:findD(root->right,n,level+1);
    }
   
    int findDist(Node* root, int a, int b) 
    {
        if(root==NULL)
        return -1;
        
        Node* l=lca(root,a,b);
        
        int ad=findD(root,a,0);
        int bd=findD(root,b,0);
        int ld=findD(root,l->data,0);
        
        return ad+bd-2*ld;
    }