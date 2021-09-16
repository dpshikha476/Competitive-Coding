 ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) 
    {
        if(l1==NULL && l2==NULL)
            return l1;
        
        if(l1==NULL)
            return l2;
        
        if(l2==NULL)
            return l1;
        
        
        ListNode* head;
        ListNode* cur;
        
        if(l1->val < l2->val)
        {
            head=l1;
            l1=l1->next;
        }
        else
        {
            head=l2;
            l2=l2->next;
        }
        
        cur=head;
        
        while(l1 && l2)
        {
            if(l1->val < l2->val)
            {
                cur->next=l1;
                l1=l1->next;
            }
            else
            {
                cur->next=l2;
                l2=l2->next;
            }
            
            cur=cur->next;
            
        }
        
        while(l1)
        {
            cur->next=l1;
            l1=l1->next;
            cur=cur->next;
        }
        
        while(l2)
        {
            cur->next=l2;
            l2=l2->next;
            cur=cur->next;
        }
        
        cur->next=NULL;
        
        return head;
    
    }