    ListNode* deleteDuplicates(ListNode* head) 
    {
        map<int,int> m;
        ListNode* cur=head;
    
        if(head==NULL)
        return NULL;
        
        while(cur)
        {
            m[cur->val]++;
            cur=cur->next;
        }
        
        auto it=m.begin();
        ListNode* h=NULL;
        while(it!=m.end())
        {
            if(it->second==1)
            {
                h=new ListNode(it->first);
                it++;
                break;
            }
            else
                it++;
        }
        
        cur=h;
        
        for(;it!=m.end();it++)
        {
            if(it->second==1)
            {
                ListNode* x=new ListNode(it->first);
                cur->next=x;
                cur=cur->next;
            }
        }
        
        if(cur)
        cur->next=NULL;
        
        return h;
       
    }