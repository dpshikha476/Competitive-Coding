ListNode* Solution::solve(ListNode* a) 
{
    if(a==NULL)
    return a;
    ListNode* b=a;
    vector<int> v;
    while(b)
    {
        v.push_back(b->val);
        b=b->next;
    }

    sort(v.begin(),v.end());

    ListNode* head=new ListNode(v[0]);
    ListNode* cur=head;

    for(int i=1;i<v.size();i++)
    {
        ListNode* x=new ListNode(v[i]);
        cur->next=x;
        cur=cur->next;
    }

    cur->next=NULL;
    return head;

}