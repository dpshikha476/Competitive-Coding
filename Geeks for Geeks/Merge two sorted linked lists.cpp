Node* sortedMerge(Node* a, Node* b)  
{  
    Node* head;
    
    if(a->data<=b->data)
    {
        head= new Node(a->data);
        a=a->next;
    }
    else
    {
        head= new Node(b->data);
        b=b->next;
    }
    
    Node* l=head;
    
    while(a && b)
    {
        Node* x;
        if(a->data<=b->data)
        {
            x= new Node(a->data);
            a=a->next;
        }
        else
        {
            x= new Node(b->data);
            b=b->next;
        }
        
        l->next=x;
        l=l->next;
    }
    
    while(a)
    {
        Node* x= new Node(a->data);
        a=a->next;
        l->next=x;
        l=l->next;
    }
    
    while(b)
    {
        Node* x= new Node(b->data);
        b=b->next;
        l->next=x;
        l=l->next;
    }
    
    l->next=NULL;
    
    return head;
}  