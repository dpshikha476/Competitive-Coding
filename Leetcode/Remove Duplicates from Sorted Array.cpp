    int removeDuplicates(vector<int>& a) 
    {
        for(int i=1;i<a.size();)
        {
            if(a[i]==a[i-1])
                a.erase(a.begin()+i);
            else
                i++;
        }
        
        int k=a.size();
        
        return k;
        
    }