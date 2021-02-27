Node * insert(Node * root, int value) 
{
   Node* newnode = new Node(value);

   newnode->left = NULL;
   newnode->right = NULL; 
   if(root == NULL)
       root = newnode;
       
   Node *temp = root;
   while(temp->left && value < temp->data)
   {
       temp = temp->left;
   }
   while(temp->right && value > temp->data)
   {
       temp = temp->right;
   }
   while(temp->left && value < temp->data)
   {
       temp = temp->left;
   }
   if(value > temp->data)
       temp->right = newnode;
   if(value < temp->data)
       temp->left = newnode; 
   return root;
}