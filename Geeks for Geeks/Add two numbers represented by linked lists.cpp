    struct Node* reverse(struct Node* head)
    {
        Node* current = head;
        Node *prev = NULL, *next = NULL;
 
        while (current != NULL) 
        {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        head = prev;
        
        return head;
    }
    
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        long long int n1=0,n2=0,sum=0,carry=0;
        struct Node* f=reverse(first);
        struct Node* s=reverse(second);
        struct Node* head=NULL;
        struct Node* tail=NULL;

        while(f && s)
        {
            sum= f->data+s->data+carry;
            
            carry=(sum>9)?sum/10:0;
            
            sum=sum%10;
            
            struct Node* n=new Node(sum);
            
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

            f=f->next;
            s=s->next;
        }
        
        while(f)
        {
            sum=carry+f->data;
             carry=(sum>9)?sum/10:0;
            
            sum=sum%10;
            
            struct Node* n=new Node(sum);
            
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
            
            f=f->next;
            
        }
        
        while(s)
        {
            sum=carry+s->data;
             carry=(sum>9)?sum/10:0;
            
            sum=sum%10;
            
            struct Node* n=new Node(sum);
            
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
            
            s=s->next;
        }
        
        if(carry)
        {
            struct Node* n=new Node(carry);
            tail->next=n;
            tail=n;
        }
        
        head=reverse(head);
        
        return head;
    }