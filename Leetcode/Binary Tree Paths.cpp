 void paths(TreeNode* root, vector<string> &v, string s)
    {
        if(root==NULL)
        return;
        
        if(s=="")
            s+=to_string(root->val);
        else
            s+="->"+to_string(root->val);
        
        if(root->right==NULL && root->left==NULL)
            v.push_back(s);
        
        paths(root->left,v,s);
        paths(root->right,v,s);
        
    }
    
    vector<string> binaryTreePaths(TreeNode* root) 
    {
        vector<string> v;
        string s="";
        paths(root,v,s);
        
        return v;
    }