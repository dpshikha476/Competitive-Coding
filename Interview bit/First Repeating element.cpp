int Solution::solve(vector<int> &A) 
{
    int ans=INT_MAX;

    unordered_map<int,int> m;

    for(int i=0;i<A.size();i++)
    {

    if(m.find(A[i])!=m.end()) 
    ans=min(m[A[i]],ans);

    else 
        m[A[i]]=i; 
    }

    return ans!=INT_MAX?A[ans]:-1;
}