vector<int> diagonal(Node *root)
{
   vector<int> v;
   if(root==NULL)
   return v;
   queue<Node*>q;
   q.push(root);
   
   while(!q.empty())
   {
       Node* f=q.front();
       q.pop();
       
       if(f==NULL)
       {
           if(q.empty())
           return v;
           
           else
           cout<<"\n";
           
           q.push(NULL);
       }
       
       else
       {
           while(f)
           {
                v.push_back(f->data);
               
                if(f->left)
                q.push(f->left);
                
                f=f->right;
           }
          
       }
   }
   