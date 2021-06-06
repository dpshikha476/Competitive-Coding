struct Node* reverseDLL(struct Node * head)
{
    struct Node* cur=head;
    struct Node* p=NULL;
    struct Node* n=NULL;
    
    while(cur)
    {
        n=cur->next;
        cur->next=p;
        p=cur;
        cur->prev=n;
        cur=n;
    }
    
    return p;
}