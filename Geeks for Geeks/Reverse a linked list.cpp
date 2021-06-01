struct Node* reverseList(struct Node *head)
    {
        struct Node* cur=head;
        struct Node* p=NULL;
        
        while(cur!=NULL)
        {
            struct Node* n=cur->next;
            cur->next=p;
            p=cur;
            cur=n;
        }
        
        return p;
        
    }