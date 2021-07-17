void pop(Node* cur, Node** p)
    {
        if(cur)
        {
            pop(cur->right,p);
            
            cur->next=*p;
            
            *p=cur;
            
            pop(cur->left,p);
        }
    }
    
    void populateNext(Node *cur)
    {
        Node* p=NULL;
        
        pop(cur,&p);
        
    }