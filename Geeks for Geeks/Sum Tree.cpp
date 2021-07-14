class Solution
{
    public:
    
    int sum(Node* node)
    {
        if(node==NULL)
        return 0;
        
        return sum(node->left)+node->data+sum(node->right);
    }
    
    bool isSumTree(Node* root)
    {
         if(root==NULL || root->left==NULL || root->right==NULL)
         return 1;
         
         int ls=sum(root->left);
         int rs=sum(root->right);
         
         if(root->data==ls+rs && isSumTree(root->left) && isSumTree(root->right))
         return 1;
         
         return 0;
    }