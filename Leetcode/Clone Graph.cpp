void dfs(Node* copy,vector<Node*> &vis,Node* node)
    {
        vis[copy->val]=copy;
        
        for(auto it:node->neighbors)
        {
            if(vis[it->val]==NULL)
            {
                Node* newnode= new Node(it->val);
                (copy->neighbors).push_back(newnode);
                dfs(newnode,vis,it);
            }
            else
                (copy->neighbors).push_back(vis[it->val]);
        }
    }
    
    Node* cloneGraph(Node* node) 
    {
        if(node==NULL)
            return NULL;
        
        vector<Node*> vis(1000,NULL);
        
        Node* copy=new Node(node->val);
        
        dfs(copy,vis,node);
        
        return copy;
            
    }