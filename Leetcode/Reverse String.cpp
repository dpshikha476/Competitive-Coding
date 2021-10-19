    void reverse(vector<char> &s, int l, int e)
    {
        if(l>e)
            return;
        
        swap(s[l],s[e]);
        l++;
        e--;
        reverse(s,l,e);
        
    }
    
    void reverseString(vector<char>& s) 
    {
        reverse(s,0,s.size()-1);
    }