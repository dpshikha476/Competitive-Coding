ListNode* Solution::mergeTwoLists(ListNode* a, ListNode* b) 
{
   ListNode* c;
   if(a->val<b->val)
   {
       c=new ListNode(a->val);
       a=a->next;
   } 
   else
   {
       c=new ListNode(b->val);
       b=b->next;
   }
   ListNode* d=c;

   while(a && b)
   {
        if(a->val<b->val)
        {
            ListNode* x=new ListNode(a->val);
            d->next=x;
            d=d->next;
            a=a->next;
        } 
        else
        {
            ListNode* x=new ListNode(b->val);
            d->next=x;
            d=d->next;
            b=b->next;
        }
   }

   while(a)
   {
       ListNode* x=new ListNode(a->val);
        d->next=x;
        d=d->next;
        a=a->next;
   }

   while(b)
   {
       ListNode* x=new ListNode(b->val);
        d->next=x;
        d=d->next;
        b=b->next;
   }

   d->next=NULL;
   return c;
}