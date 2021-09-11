bool fun(string a, string b)
{
    
    return (a+b>b+a)>0?1:0;

}

string Solution::largestNumber(const vector<int> &a) 
{
    vector<string> v;
    int i,j,c=0;

    for(i=0;i<a.size();i++)
    {
        if(a[i]==0)
        c++;
        v.push_back(to_string(a[i])); 
    }
    
    if(c==a.size())
    return "0";

   sort(v.begin(),v.end(),fun);

    string s="";
    for(i=0;i<v.size();i++)
    s+=v[i];

    return s;
}