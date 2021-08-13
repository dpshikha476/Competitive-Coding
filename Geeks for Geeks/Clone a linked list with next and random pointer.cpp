 Node *copyList(Node *head)
    {
        Node *cur=head;
        Node* temp;
        
        while(cur)
        {
            temp=cur->next;
            cur->next=new Node(cur->data);
            cur->next->next=temp;
            cur=temp;
        }
        
        cur=head;
        while(cur)
        {
            cur->next->arb=cur->arb?cur->arb->next:cur->arb;
            cur=cur->next->next;
        }
        
        Node *o=head;
        Node *c=head->next;
        Node *newhead=c;
        
        while(o && c)
        {
            o->next=o->next->next;
            c->next=c->next?c->next->next:c->next;
            o=o->next;
            c=c->next;
        }
    
        return newhead;    
        
    }
