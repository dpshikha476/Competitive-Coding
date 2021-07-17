    string fillMap(Node* root,map<string,int> &m , bool &flag)
    {
        if(root==NULL)
        return "";
        
        string s="(";
        s+=fillMap(root->left,m,flag);
        s+=to_string(root->data);
        s+=fillMap(root->right,m,flag);
        s+=")";
        
        if(m[s]==1 && s.length()>3)
        flag=true;
        
        m[s]++;
        
        return s;
        
    }
    
    
    int dupSub(Node *root) 
    {
        if(root==NULL)
         return 0;
         
        map<string,int> m;
        bool flag=false;
        
        fillMap(root, m,flag);
        
        if(flag)
        return 1;
        
        return 0;
        
    }