 bool isSameTree(TreeNode* p, TreeNode* q) 
    {
        if(p==NULL && q==NULL)
            return true;
        
        else if((p==NULL && q!=NULL) || (p!=NULL && q==NULL))
            return false;
        
        if(p->val==q->val && isSameTree(p->right,q->right) && isSameTree(p->left,q->left))
            return true;
        
        return false;
        
    }