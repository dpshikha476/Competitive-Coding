int Solution::solve(ListNode* A, int B) 
{
    int length=0;

    ListNode* temp;

    ListNode* next;

    int val;

    temp=A;

    while(temp!=NULL)
    {

    length+=1;

    temp=temp->next;

    }

    int middle=(length/2)+1;

    int found=middle-B;

    if(length==1)
    {

    if(B==0)
    {

    return A->val;

    }

    else return -1;

    }

    if(found<0)
    return -1;

    ListNode* p;

    p=A;

    while(found-1)
    {

    p=p->next;

    found--;

    }

    return p->val;


}