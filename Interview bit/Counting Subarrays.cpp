int Solution::solve(vector<int> &A, int B) 
{
    int n=A.size();
    int i=0,j=0;
    int ans=0;
    int sum=0,prej=-1;
    while(i<n && j<n)
    {
        if(j!=prej)
            sum+=A[j];
        if(sum<B) 
        {
            ans+=(j-i)+1;
            prej=j;
            j++;
        }
        else
        {
            prej=j;
            sum-=A[i];
            i++;
        }
    }
    return ans;

}
