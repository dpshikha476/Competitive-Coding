long long  multiplyTwoLists (Node* l1, Node* l2)
{
    Node* a=l1;
    Node* b=l2;
    long long n1=0,n2=0,m=1000000007;
    
    while(a)
    {
        n1=(n1*10)%m+a->data;
        a=a->next;
    }
    
    while(b)
    {
        n2=(n2*10)%m+b->data;
        b=b->next;
    }
    
    return (n1%m * n2%m)%m;
}