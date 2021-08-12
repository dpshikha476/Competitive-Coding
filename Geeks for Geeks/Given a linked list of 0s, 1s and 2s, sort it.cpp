 Node* segregate(Node *head) 
    {
        Node* cur=head;
        vector<int> v;
        
        while(cur)
        {
            v.push_back(cur->data);
            cur=cur->next;
        }
        
        sort(v.begin(),v.end());
        
        Node* newhead=new Node(v[0]);
        Node* h=newhead;
        
        for(int i=1;i<v.size();i++)
        {
            Node* x=new Node(v[i]);
            h->next=x;
            h=h->next;
        }
        
        h->next=NULL;
        
        return newhead;
        
        
    }