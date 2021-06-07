int length(struct Node* head)
{
    struct Node* c=head;
    int count=0;
    
    while(c)
    {
        count++;
        c=c->next;
    }
    
    return count;
}

int getNthFromLast(struct Node *head, int n)
{
    struct Node* cur=head;
    int l=length(head);
    int k=l-n;
    
    while(k-- && cur)
        cur=cur->next;
    
    if(cur==NULL)
    return -1;
    
    return cur->data;
}