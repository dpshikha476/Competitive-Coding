DoublyLinkedListNode* sortedInsert(DoublyLinkedListNode* head, int data) 
{
    DoublyLinkedListNode* temp=head;
    DoublyLinkedListNode* n = new DoublyLinkedListNode (data);
    if(data<head->data)
    {
        head->prev=n;
        n->next=head;
        return n;
    }
    while(temp!=NULL && temp->next!=NULL)
    {
        if(temp->data<=data && temp->next->data>=data)
        {
            n->next=temp->next;
            temp->next->prev=n;
             n->prev=temp;
            temp->next=n;  
             return head; 
        }
        else
        temp=temp->next;
    
    }
    temp->next=n;
    n->prev=temp;
    return head;
   
}
