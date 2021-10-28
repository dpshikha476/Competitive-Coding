int Solution::removeElement(vector<int> &A, int B) 
{
    vector<int> v;

    for(int i=0;i<A.size();i++)
    {
        if(A[i]!=B) 
        v.push_back(A[i]);
    }

    A.clear();
    copy(v.begin(),v.end(),back_inserter(A));
    
    return A.size();
}
