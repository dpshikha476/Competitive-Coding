    ListNode* reverse(ListNode* head)
    {
        ListNode* cur=head;
        ListNode* next=NULL;
        ListNode* prev=NULL;
        
        while(cur)
        {
            next=cur->next;
            cur->next=prev;
            prev=cur;
            cur=next;
        }
        
        return prev;
    }
    
    void reorderList(ListNode* head) 
    {
        if(head->next==NULL)
            return;
        
        ListNode* first=head;
        ListNode* slow=head, *fast=head->next;
        
        while(fast && fast->next)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        
        ListNode* second=reverse(slow->next);
        slow->next=NULL;
        
        while(second)
        {
            ListNode* temp1=first->next;
            ListNode* temp2=second->next;
            first->next=second;
            second->next=temp1;
            first=temp1;
            second=temp2;
        }
        
    }