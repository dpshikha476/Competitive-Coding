
Node* constructTree(int pre[], int size)
{
    
    Node* root= newNode(pre[0]);
    Node* temp;
    stack<Node*> s;
    s.push(root);
    
    for(int i=1;i<size;i++)
    {
        temp=NULL;
        
        while(!s.empty() && pre[i]>s.top()->data)
        {
            temp=s.top();
            s.pop();
        }
        
        if(temp)
        {
            temp->right=newNode(pre[i]);
            s.push(temp->right);
        }
        else
        {
            s.top()->left=newNode(pre[i]);
            s.push(s.top()->left);
        }
    }
    
    return root;
}