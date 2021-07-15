 void sumOfNodes(Node* node, int& maxlen, int& maxsum, int sum, int len)
    {
        if(!node)
        {
            if(len>=maxlen)
            {
                maxlen=len;
                maxsum=sum;
            }
            
            else if(len==maxlen && sum>maxsum)
            {
                maxsum=sum;
            }
            
            return;
        }
        
        sumOfNodes(node->left,maxlen,maxsum,sum+node->data,len+1);
        
        sumOfNodes(node->right,maxlen,maxsum,sum+node->data,len+1);
        
    }
    
    int sumOfLongRootToLeafPath(Node *root)
    {
        if(root==NULL)
        return 0;
        
        int maxsum=INT_MIN,maxlen=0;
        
        sumOfNodes(root,maxlen,maxsum,0,0);
        
        return maxsum;
    }