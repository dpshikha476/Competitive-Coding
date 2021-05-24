string isSubset(int a1[], int a2[], int n, int m) 
{
    unordered_map<int,int> v;
    
    int i;
    
    for(i=0;i<n;i++)
    {
        v[a1[i]]++;
    }
    
    for(i=0;i<m;i++)
    {
        if(v.find(a2[i])==v.end())
        return "No";
    }
    
    return "Yes";
}