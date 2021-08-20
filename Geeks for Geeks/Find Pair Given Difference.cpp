bool findPair(int a[], int size, int n)
{
    unordered_map<int,int> m;
    int i;
    
    for(i=0;i<size;i++)
    {
        if(m.find(a[i]+n)!=m.end() || m.find(abs(a[i]-n))!=m.end())
        return true;
        
        m[a[i]]++;
    }
    
    return false;
    
}