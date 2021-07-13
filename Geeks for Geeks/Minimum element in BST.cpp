int minValue(Node* root)
{
   if(root==NULL)
   return -1;
   
   Node* node=root;
   
   while(node->left)
   {
       node=node->left;
   }
   
   return node->data;
}
