struct Node* makeUnion(struct Node* head1, struct Node* head2)
{
    set<int> s;
    
    while(head1)
    {
        s.insert(head1->data);
        head1=head1->next;
    }
    
     while(head2)
    {
        s.insert(head2->data);
        head2=head2->next;
    }
    
    auto it=s.begin();
    struct Node* head=new Node(*it);
    it++;
    struct Node* cur=head;
    
    for(it;it!=s.end();it++)
    {
        struct Node* x= new Node(*it);
        cur->next=x;
        cur=cur->next;
    }
    
    cur->next=NULL;
    
    return head;
    
}
