
Node* findIntersection(Node* head1, Node* head2)
{
    Node* head=NULL;
    Node* tail=NULL;
    Node* h1=head1;
    Node* h2=head2;
    
    while(h1 && h2)
    {
        if(h1->data==h2->data)
        {
            Node* n=new Node(h1->data);
            if(head==NULL)
            {
                head=n;
                tail=n;
            }
            else
            {
                tail->next=n;
                tail=n;
            }
            h1=h1->next;
            h2=h2->next;
            
        }
        else if(h1->data<h2->data)
        h1=h1->next;
        
        else if(h1->data>h2->data)
        h2=h2->next;
    }
    
    return head;
}