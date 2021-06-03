Node *reverse(Node *head)
    {
        Node * prev = NULL;
        Node * current = head;
        Node * next;
        while (current != NULL)
        {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        return prev;
    }
    
    Node* add(Node *head) 
    {
        Node* cur=head;
        Node*p=NULL;
        int carry=1,sum=0;
        while(cur)
        {
            sum=carry+cur->data;
            
            carry=(sum>9)?1:0;
            
            sum%=10;
            
            cur->data=sum;
            
            p=cur;
            cur=cur->next;
            
        }
        
        if(carry>0)
        {
            Node* t= new Node(carry);
            p->next= t;
            t->next=NULL;
        }
        
        return head;
    }
    
    Node* addOne(Node *head) 
    {
        head=reverse(head);
        
        head= add(head);
        
        head=reverse(head);
        
        return head;
        
    }