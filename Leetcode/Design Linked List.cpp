   struct ListNode {
      int val;
      ListNode *next;
      ListNode *prev;
      ListNode(int x=0) : val(x), next(nullptr), prev(nullptr) {}  
 };
    ListNode *head=new ListNode(-1);
    ListNode *tail=new ListNode(-1);
    int sz=0; 
    MyLinkedList() 
    {
         head->next=tail;
         tail->prev=head;
    }
    int get(int index) 
    {
        if(index>=sz)
        {
            return -1;
        }
        int cnt=0;
        ListNode *temp=head->next;
        while(cnt!=index)
        {
            temp=temp->next;
            cnt++;
        }
        return temp->val;
    }
    void addAtHead(int val) 
    {
        sz++;
            ListNode *x=new ListNode(val);
            ListNode *b=head->next;
            head->next=x;
            x->prev=head;
            x->next=b;
            b->prev=x;   
    }
    
    void addAtTail(int val) 
    {
        sz++;
        ListNode *x=new ListNode(val);
        ListNode *c=tail->prev;
        c->next=x;
        x->prev=c;
        x->next=tail;
        tail->prev=x;
    }
    
    void addAtIndex(int index, int val) 
    {
        if(index>sz)
        {
            return;
        }
        sz++;
        ListNode *x=new ListNode(val);
        int cnt=0;
        ListNode *temp=head->next;
        while(cnt!=index)
        {
            temp=temp->next;
            cnt++;
        }
        ListNode *c=temp->prev;
        c->next=x;
        x->prev=c;
        x->next=temp;
        temp->prev=x;
        
    }
    
    void deleteAtIndex(int index) 
    {
        if(index>=sz)
        {
            return;
        }
        sz--;
        int cnt=0;
        ListNode *temp=head->next;
        while(cnt!=index)
        {
            temp=temp->next;
            cnt++;
        }
        ListNode *pr=temp->prev;
        ListNode *nx=temp->next;
        pr->next=nx;
        nx->prev=pr;
        
    }