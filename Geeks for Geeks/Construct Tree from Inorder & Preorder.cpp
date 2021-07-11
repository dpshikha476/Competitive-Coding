int search(int in[], int x,int n)
    {
        for(int i=0;i<n;i++)
        {
            if(in[i]==x)
            return i;
        }
    }
    
    Node* buildTreeH(int in[],int pre[],int ins,int ine,int pres,int pree, int n)
    {
        if(ins>ine)
        return NULL;
        
        int rootdata=pre[pres];
        
        int leftins= ins;
        int leftine=search(in,rootdata,n)-1;
        int leftpres=pres+1;
        int leftpree=leftpres+leftine-leftins;
        
        int rightins=search(in,rootdata,n)+1;
        int rightine=ine;
        int rightpres=leftpree+1;
        int rightpree=pree;
       
        Node* root=new Node(rootdata);
        root->left=buildTreeH(in,pre,leftins,leftine,leftpres,leftpree,n);
        root->right=buildTreeH(in,pre,rightins,rightine,rightpres,rightpree,n);
        
        return root;
        
    }
    
    Node* buildTree(int in[],int pre[], int n)
    {
        
        return buildTreeH(in,pre,0,n-1,0,n-1,n);
    }