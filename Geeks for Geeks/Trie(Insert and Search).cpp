void insert(struct TrieNode *root, string key)
{
    TrieNode* node=root;
    
    for(int i=0;i<key.length();i++)
    {
        int num = key[i]-'a';
        if(node->children[num]==NULL)
        node->children[num]=getNode();
        
        node=node->children[num];
    }
    
    node->isLeaf=true;
}

//Function to use TRIE data structure and search the given string.
bool search(struct TrieNode *root, string key) 
{
    
    TrieNode* node=root;
    
    for(int i=0;i<key.length();i++)
    {
        int num = key[i]-'a';
        if(node->children[num]==NULL)
        return false;
        
        node=node->children[num];
    }
    
    return node->isLeaf;
    
    node->isLeaf=true;
}