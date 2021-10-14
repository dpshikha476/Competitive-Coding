    
    int comp(pair<char,int> a, pair<char,int> b)
    {   
        return a.second > b.second;
    }

class Solution {
public:
    
    string frequencySort(string s) 
    {
        map<int,int>ma;
        string r="";
        
        for(int i=0;i<s.length();i++)
        ma[s[i]]++;
        
        vector<pair<char,int>> v;
        
        for(auto i:ma)
        {
            v.push_back(make_pair(i.first,i.second));
        }
        
        sort(v.begin(),v.end(),comp);  
        
        for(int i=0; i<v.size(); i++)
        {
            for(int j=0; j<v[i].second; j++)
            {
                r+= v[i].first;
            }
        }
        
        return r;
        
    }
};
