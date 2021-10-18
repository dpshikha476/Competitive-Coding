    int removeElement(vector<int>& a, int v) 
    {
        int pos = 0;
        
        for(int i=0;i<a.size();i++)
        {
            if(a[i]!=v) 
                a[pos++]=a[i];
        }
        
        return pos;
    }