void splitList(Node *head, Node **head1_ref, Node **head2_ref)
{
    Node *cur=head;
    
    int c=1,l;
    
    if(cur->next!=head)
    {
        cur=cur->next;
        c=2;
    }
    
    while(cur)
    {
        if(cur==head)
        break;
        cur=cur->next;
        c++;
    }
    
    l=c/2;
    
    
    cur=head;
    
    for(int i=0;i<l-1;i++)
    {
        cur=cur->next;
    }
    
    *head2_ref=cur->next;
    Node* h=*head2_ref;
    cur->next=head;
    
    for(int i=0;i<c-l-2;i++)
    {
        h=h->next;
    }
    
    h->next=*head2_ref;
    *head1_ref=head;
    
    
}