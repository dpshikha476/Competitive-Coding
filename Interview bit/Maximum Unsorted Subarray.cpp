vector<int> Solution::subUnsort(vector<int> &A) 
{
    vector<int>res;
    int f = INT_MIN;
    int l = INT_MAX;

    for(int i=0;i<A.size()-1;i++)
    {
        if(A[i+1] < A[i]){
            l = i+1;
        }
    }
    for(int i=A.size()-1;i>0;i--){
        if(A[i-1] > A[i]){
            f = i-1;
        }
    }

    if(f == INT_MIN && l == INT_MAX)
    {
        res.push_back(-1);
        return res;
    }

    int maximum = INT_MIN;
    int minimum = INT_MAX;

    for(int i=f;i<=l;i++){
        minimum = min(minimum,A[i]);
        maximum = max(maximum,A[i]);
    }

    int initial = upper_bound(A.begin(),A.begin()+f,minimum) - A.begin();
    int final = lower_bound(A.begin()+l+1,A.end(),maximum) - A.begin() - 1;
    res.push_back(initial);
    res.push_back(final);
    return res;

}
