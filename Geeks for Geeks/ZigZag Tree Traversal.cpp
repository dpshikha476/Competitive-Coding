vector <int> zigZagTraversal(Node* root)
{
	vector <int> v;
	if(root==NULL)
	return v;
	
    stack<Node*>c,n;
    bool flag=true;
	c.push(root);
	
	while(!c.empty())
	{

    	 Node* f=c.top();
    	 c.pop();
    	 
    	 if(f)
    	 {
    	     v.push_back(f->data);
    	     
    	     if(flag)
    	     {
    	         if(f->left)
            	 n.push(f->left);
            	    
            	 if(f->right)
            	 n.push(f->right);
    	     }
    	     else
    	     {
    	         if(f->right)
            	 n.push(f->right);
            	 
    	         if(f->left)
            	 n.push(f->left);
    	     }
    	 }
    	 
    	    
    	 if(c.empty())
    	 {
    	     flag=!flag;
    	     swap(c,n);
    	 }
    	    
	}
	
	return v;
	
}