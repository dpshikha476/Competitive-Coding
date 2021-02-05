DoublyLinkedListNode* reverse(DoublyLinkedListNode* head) 
{
    DoublyLinkedListNode* temp=head;
    DoublyLinkedListNode* n;
    DoublyLinkedListNode* c;
    while(temp!=NULL)
    {
        c=temp->prev;
        temp->prev=temp->next;
        temp->next=c;
        n=temp;
        temp=temp->prev;
        
    }
    return n;
}