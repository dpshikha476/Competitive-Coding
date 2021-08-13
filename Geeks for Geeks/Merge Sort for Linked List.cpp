    Node* mergeboth(Node* h1, Node* h2)
    {
        Node* ans=NULL;
        
        if(h1==NULL)
        return h2;
        
        if(h2==NULL)
        return h1;
        
        
        if(h1->data<=h2->data)
        {
            ans=h1;
            ans->next=mergeboth(h1->next,h2);
        }
        
        else
        {
            ans=h2;
            ans->next=mergeboth(h1,h2->next);
        }
        
        return ans;
        
    }
    
    void merge(Node** head)
    {
        Node* cur=*head;
        Node* h1=*head;
        
        if(cur==NULL || cur->next==NULL)
        return;
        
        Node*h2=cur->next;
        
        while(h2 && h2->next)
        {
            cur=cur->next;
            h2=h2->next->next;
        }
        
        h2=cur->next;
        cur->next=NULL;
        
        
        merge(&h1);
        merge(&h2);
        
        *head=mergeboth(h1,h2);
        
    }
    
    
    Node* mergeSort(Node* head) 
    {
        merge(&head);
        
        return head;
    }