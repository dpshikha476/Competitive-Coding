string findDifferentBinaryString(vector<string>& a) 
    {
        string res="";
        
        for(int i=0;i<a.size();i++)
            res+=a[i][i]=='0'?'1':'0';
        
        return res;
        
    }