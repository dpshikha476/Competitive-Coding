    TreeNode*  minValueNode(TreeNode* node)
    {
        TreeNode* cur=node->right;
        while(cur->left)
            cur=cur->left;
        
        return cur;
    }
    
    TreeNode* deleteNode(TreeNode* root, int key) 
    {
        if(root==NULL)
            return NULL;
        
        if(root->val<key)
            root->right=deleteNode(root->right,key);
        
        else if(root->val>key)
            root->left=deleteNode(root->left,key);
        
        else
        {
            
            if(root->right==NULL)
            {
                TreeNode* temp=root->left;
                delete(root);
                return temp;
            }
             else if(root->left==NULL)
            {
                TreeNode* temp=root->right;
                delete(root);
                return temp;
            }
            
            else
            {
                TreeNode* temp=minValueNode(root);
                swap(temp->val,root->val);
                root->right=deleteNode(root->right,key);
            }
                
            
        }
             
            return root;
        
    }