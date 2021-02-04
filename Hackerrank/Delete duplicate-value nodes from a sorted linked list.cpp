SinglyLinkedListNode* removeDuplicates(SinglyLinkedListNode* head) 
{
    if(head==NULL || head->next==NULL)
    return head;
   SinglyLinkedListNode* temp = head;
    while(temp!=NULL && temp->next!=NULL)
    {
       if(temp->data==temp->next->data)
       temp->next=temp->next->next;
       else
       temp=temp->next;
    }
    return head;
}