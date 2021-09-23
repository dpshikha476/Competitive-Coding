vector<int> Solution::findPerm(const string A, int b) 
{
    vector<int> ans;
    int l=1,r=b;

    for(int i=0; i<A.length(); i++)
    {
        if(A[i]=='I')
        {
            ans.push_back(l);
            l=l+1;
        }

        else
        {
            ans.push_back(r);
            r=r-1;
        }

    }

    ans.push_back(l);

    return ans;
}