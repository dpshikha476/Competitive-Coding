string code(string s)
{
    unordered_map<char,int> m;
    string r="";
    int j=1;
    
    for(int i=0;i<s.length();i++)
    {
        if(m.find(s[i])==m.end())
        {
            m[s[i]]=j;
            j++;
        }
    }
    
    for(int i=0;i<s.length();i++)
    {
        r+=to_string(m[s[i]]);
    }
    
    return r;
    
}


vector<string> findMatchedWords(vector<string> dict,string pattern)
{
       string r= code(pattern);
       vector<string> v;
       
       for(int i=0;i<dict.size();i++)
       {
           if(code(dict[i])==r)
           v.push_back(dict[i]);
           
       }
       
       
       return v;
}