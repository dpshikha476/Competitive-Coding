vector<int> leftView(Node *root)
{
   vector<int> v;
   
   if(root==NULL)
   return v;
   
   queue<Node*> q;
   q.push(root);
   int n,i;
   
   while(!q.empty())
   {
      n=q.size();
      for(i=1;i<=n;i++)
      {
          Node* f=q.front();
          q.pop();
          
          if(i==1)
          v.push_back(f->data);
          
          if(f->left)
          q.push(f->left);
          
          if(f->right)
          q.push(f->right);
      }
   }
   
   return v;
   
}
