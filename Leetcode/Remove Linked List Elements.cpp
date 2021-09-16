    ListNode* removeElements(ListNode* head, int val) 
    {
        if(head==NULL)
            return head;
        
        while(true)
        {
            if(head==NULL)
                return head;
            
            if(head->val==val)
            {
                head=head->next;
            }
            else
                break;
        }
        
        if(head->next==NULL && head->val!=val)
            return head;
        
        ListNode* n;
        
        if(head->next->next)
            n=head->next->next;
        else
            n=NULL;
        
        ListNode* cur=head->next;
        ListNode* prev=head;
        
        while(prev && cur)
        {
            if(cur->val==val)
            {
                if(n!=NULL)
                {
                    prev->next=n;
                    cur=cur->next;
                    n=n->next;
                }
                else
                {
                    prev->next=NULL;
                    cur=NULL;
                }
            }
            else
            {
                prev=cur;
                cur=cur->next;
                
                if(n && n->next)
                    n=n->next;
                else
                    n=NULL;
            }
        }
        
        return head;
        
        
    }