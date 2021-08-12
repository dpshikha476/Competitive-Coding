  Node * mergeKLists(Node *a[], int k)
    {
        int i;
        vector<int> v;
        
        for(i=0;i<k;i++)
        {
            Node* x=a[i];
            
            while(x)
            {
                v.push_back(x->data);
                x=x->next;
            }
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