    void deleteNode(Node *del)
    {
       if(del==NULL)
       return; 
        
       Node *cur=del;
       Node *prev;
       
       while(cur->next!=NULL)
       {
           cur->data=cur->next->data;
           prev =cur;
           cur=cur->next;
       }
       
       prev->next=NULL;
       
    }