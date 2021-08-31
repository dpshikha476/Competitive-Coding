    static bool comp(string a, string b)
    {
        int n1=a.length(),n2=b.length();
        if(n1==n2)
            return a<b;
        
        return n1<n2;
    }
    
    
    string kthLargestNumber(vector<string>& a, int k) 
    {
        sort(a.begin(),a.end(),comp);
        
        return a[a.size()-k];
        
    }