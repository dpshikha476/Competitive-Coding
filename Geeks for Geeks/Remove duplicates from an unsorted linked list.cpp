Node * removeDuplicates( Node *head) 
    {
        unordered_set<int> m;
        Node* cur=head;
        Node* p=NULL;
    
        if(head==NULL)
        return NULL;
        
        while(cur)
        {
            if(m.find(cur->data)!=m.end())
            {
                p->next=cur->next;
                delete(cur);
            }
            else
            {
                m.insert(cur->data);
                p=cur;
            }
            cur=p->next;
        }
        
        return head;
    }