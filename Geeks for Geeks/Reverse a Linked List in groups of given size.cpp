struct node *reverse (struct node *head, int k)
    { 
        stack<node*> s;
        struct node* c=head;
        struct node* l=NULL;
        while(c!=NULL)
        {
              int count=0;
              while(c!=NULL && count<k)
              {
                  s.push(c);
                  c=c->next;
                  count++;
              }
              
              while(s.size()>0)
              {
                  if(l==NULL)
                  {
                      l=s.top();
                      head=l;
                      s.pop();
                  }
                  else
                  {
                      l->next=s.top();
                      l=l->next;
                      s.pop();
                  }
              }
        }
        
        l->next=NULL;
        
        return head;
    
    }