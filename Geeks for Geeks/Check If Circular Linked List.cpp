bool isCircular(struct Node *head)
{
    struct Node* n=head;
    
    while(n)
    {
        if(n->next==head)
        return 1;
        n=n->next;
    }
   
    return 0;
}