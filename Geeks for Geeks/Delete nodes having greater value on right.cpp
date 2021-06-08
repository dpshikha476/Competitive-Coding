Node* reverse(Node* head)
    {
        Node* cur=head;
        Node* p=NULL; 
        Node* n;
        while(cur)
        {
            n=cur->next;
            cur->next=p;
            p=cur;
            cur=n;
        }
        
        return p;
    }
    
    Node *compute(Node *head)
    {
        head=reverse(head);
        Node* cur=head;
        Node* max=head;
       
        while(cur && cur->next)
        {
            if(cur->next->data < max->data)
            {
               Node* temp=cur->next;
               cur->next=temp->next;
               free(temp); 
            }
            
            else
            {
                cur=cur->next;
                max=cur;
            }
            
            
        }
        
        head= reverse(head);
        
        return head;
    }
    