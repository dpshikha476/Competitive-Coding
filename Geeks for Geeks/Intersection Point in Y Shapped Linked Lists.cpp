int getCount(Node* head)
{
    Node* current = head;

    // Counter to store count of nodes
    int count = 0;

    // Iterate till NULL
    while (current != NULL) {

        // Increase the counter
        count++;

        // Move the Node ahead
        current = current->next;
    }

    return count;
}

int intersectPoint(Node* head1, Node* head2)
{

    Node* h1=head1;
    Node* h2=head2;
    int l1=getCount(head1);
    int l2=getCount(head2);
    
    if(l1>l2)
    {
        int d=l1-l2;
        while(d)
        {
            h1=h1->next;
            d--;
        }
    }
    else if(l2>l1)
    {
        int d=l2-l1;
        while(d)
        {
            h2=h2->next;
            d--;
        }
    }
    
    while(h1 && h2)
    {
        if(h1==h2)
        return h1->data;
        
        h1=h1->next;
        h2=h2->next;
    }
    
}