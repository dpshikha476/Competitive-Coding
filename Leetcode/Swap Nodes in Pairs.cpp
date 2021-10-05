    ListNode* swapPairs(ListNode* head) 
    {
        if(head==NULL || head->next==NULL)
            return head;
        
        ListNode* node = head->next;
        head->next = swapPairs(head->next->next);
        node->next = head;
        
        return node;
        
    }