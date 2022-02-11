class Trie
{
    public:
    
    Trie* links[26];
    int count;
    bool flag;
        
    Trie()
    {
        flag=false;
        count=0;
        for(int i=0;i<26;i++)
        links[i]=NULL;
    }
};
        
    void insert(string s,Trie* root)
    {
        for(int i=0;i<s.length();i++)
        {
            ++root->count;
            int num=s[i]-'a';
            
            if(!root->links[num])
                root->links[num]=new Trie();
                
            root=root->links[num];
        }
        
        ++root->count;
        root->flag=true;
    }
    
    string find(string s, Trie* root)
    {
        string prefix="";
        for(int i=0;i<s.length();i++)
        {
            int num=s[i]-'a';
            
            root=root->links[num];
            prefix+=s[i];
            
            if(root->count==1)
            return prefix; 
        }
        
        return prefix;
    }

class Solution
{
    public:
    
    vector<string> findPrefixes(string a[], int n)
    {
        Trie* root = new Trie();
        vector<string> ans;
        
        for(int i=0;i<n;i++)
        insert(a[i],root);
        
        for(int i=0;i<n;i++)
            ans.push_back(find(a[i],root));
        
        return ans;
        
    }
    
};