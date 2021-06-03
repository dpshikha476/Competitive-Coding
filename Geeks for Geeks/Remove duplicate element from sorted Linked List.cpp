void removeDuplicates(struct Node* head)
{
    struct Node* cur=head;
    
    if(head==NULL)
    return;
    
    while(cur && cur->next)
    {
        if(cur->data == cur->next->data)
        {
            struct Node* p=cur->next->next;
            free(cur->next);
            cur->next=p;
        }
        else
        cur=cur->next;
    }
    
}