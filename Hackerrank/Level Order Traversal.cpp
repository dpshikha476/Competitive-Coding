void levelOrder(Node * root)
{
    queue<Node*> nodes;
    if (root) nodes.push(root);
    for (; !nodes.empty(); nodes.pop())
    {
        cout<<nodes.front()->data<<' ';
        if (nodes.front()->left) 
        nodes.push(nodes.front()->left);
        if (nodes.front()->right) 
        nodes.push(nodes.front()->right);
    }
}