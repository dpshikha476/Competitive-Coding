    ListNode* middleNode(ListNode* head) 
    {
        ListNode* c=head;
        ListNode* h=head;
        int count=0;
        
        while(h)
        {
            count++;
            h=h->next;
        }
        
        int l=count/2;
        
        while(l--)
            c=c->next;
        
        return c;
    }