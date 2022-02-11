class Node
{
    public:
    Node* link[26];
    int end;
    
    Node()
    {
        end=0;
        for(int i=0;i<26;i++)
        link[i]=NULL;
    }
};

class Solution{
    public:
    // A : given string to search
    // B : vector of available strings

    void insert(string s, Node* root)
    {
        Node* cur=root;
        for(int i=0;i<s.length();i++)
        {
            int n=s[i]-'a';
            
            if(!cur->link[n])
            cur->link[n]=new Node();
            
            cur=cur->link[n];
        }
        
        cur->end=1;
    }
    
    bool isPresent(string s, Node* root)
    {
        Node* cur=root;
        
        for(int i=0;i<s.length();i++)
        {
            int n=s[i]-'a';
            
            if(!cur->link[n])
            return false;
            
            cur=cur->link[n];
        }
        
        return (cur!=NULL && cur->end);
    }
    
    bool solve(string s, Node* root)
    {
        if(s.length()==0)
        return true;
        
        for(int i=1;i<=s.length();i++)
        {
            if(isPresent(s.substr(0,i),root) && solve(s.substr(i,s.length()-i),root))
            return true;
        }
        
        return false;
    }
    
    int wordBreak(string a, vector<string> &b) 
    {
        Node* root=new Node();
        
        for(int i=0;i<b.size();i++)
        insert(b[i],root);
        
        return solve(a,root);
    }
};