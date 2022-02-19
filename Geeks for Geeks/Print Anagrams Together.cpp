struct Node
{
    Node* link[26]={NULL};
    int end=0;
};

class Solution{
  public:
  
    bool insert(Node* root, string s)
    {
        for(int i=0;i<s.length();i++)
        {
            int n=s[i]-'a';
            
            if(!root->link[n])
            root->link[n]=new Node();
            
            root=root->link[n];
        }
        
        root->end++;
        
        if(root->end==1)
        return false;
        
        return true;
    }
    
    vector<vector<string>> Anagrams(vector<string>& arr) 
    {
        Node* root=new Node();
        
        vector<vector<string>> ans;
        vector<pair<string,int>> a;
        
        for(int i=0;i<arr.size();i++)
        {
            string s=arr[i];
            sort(s.begin(),s.end());
            a.push_back({s,i});
        }
        
        sort(a.begin(),a.end());
        vector<string> temp;
        temp.clear();
        for(int i=0;i<a.size();i++)
        {
            if(insert(root,a[i].first)==false)
            {
                if(temp.size()!=0)
                {
                    ans.push_back(temp);
                    temp.clear();
                }
                temp.push_back(arr[a[i].second]);
            }
            else
            temp.push_back(arr[a[i].second]);
        }
        
        if(temp.size()!=0)
            ans.push_back(temp);
        
        return ans;
        
    }
};