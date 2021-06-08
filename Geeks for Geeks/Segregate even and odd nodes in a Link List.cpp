    Node* divide(int N, Node *head)
    {
        Node* head1=NULL;
        Node* head2=NULL;
        Node* tail1=NULL;
        Node* tail2=NULL;
        Node* cur=head;
        
        while(cur)
        {
            if(cur->data%2==0)
            {
                Node* n=new Node(cur->data);
                
                if(head1==NULL)
                {
                    head1=n;
                    tail1=n;
                }
                else
                {
                    tail1->next=n;
                    tail1=n;
                }
            }
            else
            {
                Node* n=new Node(cur->data);
                
                if(head2==NULL)
                {
                    head2=n;
                    tail2=n;
                }
                else
                {
                    tail2->next=n;
                    tail2=n;
                }
            }
            
            cur=cur->next;
        }
        
        if(head1==NULL && head2)
        return head2;
        
        else if(head1 && head2==NULL)
        return head1;
        
        else
        tail1->next=head2;
        return head1;
        
    }