void push(struct Queue *q1,struct Queue *q2,int num)
{
    enqueue(q2,num);
    
    while(!isEmpty(q1))
    {
        enqueue(q2,front(q1));
        dequeue(q1);
    }
    
    while(!isEmpty(q2))
    {
        enqueue(q1,front(q2));
        dequeue(q2);
    }
}

//Function to pop an element from stack using two queues. 
int pop(struct Queue *q1)
{
    if(isEmpty(q1))
    return -1;
    int t=front(q1);
    dequeue(q1);
    return t;
}