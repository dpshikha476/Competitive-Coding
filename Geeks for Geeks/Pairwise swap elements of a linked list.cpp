 Node* pairWiseSwap(struct Node* head) 
    {
        if(head==NULL || head->next==NULL)
        return head;
        
        Node* prev=head;
        Node* cur=head->next;
        head=cur;
        
       
        while(true)
        {
           Node* next=cur->next;
           cur->next=prev;
           
           if(next==NULL || next->next==NULL)
           {
               prev->next=next;
               break;
           }
           
           prev->next=next->next;
           
           prev=next;
           cur=prev->next;
           
        }
        
        
        return head;
    }