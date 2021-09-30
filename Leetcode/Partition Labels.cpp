    vector<int> partitionLabels(string s) 
    {
        int i,j=0,k=0,b[26]={-1};
        vector<int> v;
        
        for(i=0;i<s.length();i++)
            b[s[i]-'a']=i;
        
        for(i=0;i<s.length();i++)
        {
            j=max(j,b[s[i]-'a']);
            
            if(i==j)
            {
                v.push_back(j-k+1);
                k=i+1;
            }
        }
        
        return v;
    }