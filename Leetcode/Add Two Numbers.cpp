   ListNode* addTwoNumbers(ListNode* first,ListNode* second)
    {
        long long int n1=0,n2=0,sum=0,carry=0;
        ListNode* f=first;
        ListNode* s=second;
        ListNode* head=NULL;
        ListNode* tail=NULL;

        while(f && s)
        {
            sum= f->val+s->val+carry;
            
            carry=(sum>9)?sum/10:0;
            
            sum=sum%10;
            
            ListNode* n=new ListNode(sum);
            
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
            sum=carry+f->val;
             carry=(sum>9)?sum/10:0;
            
            sum=sum%10;
            
            ListNode* n=new ListNode(sum);
            
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
            sum=carry+s->val;
             carry=(sum>9)?sum/10:0;
            
            sum=sum%10;
            
            ListNode* n=new ListNode(sum);
            
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
            ListNode* n=new ListNode(carry);
            tail->next=n;
            tail=n;
        }
        
        return head;
    }