bool isvowel(char ch)
{
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    return true;

    return false;
}

int Solution::solve(string A) 
{
    int M=1e9+7;
    int vc=0,cc=0;
    int n=A.length();

    for(int i=0;i<n;i++)
    {
        if(isvowel(A[i])) 
        vc++;
        else 
        cc++;

    } 
    long long count=0;

    for(int i=0;i<n;i++)
    {

        if(isvowel(A[i])) 
        {
            vc--;
            count=(count+cc%M)%M;
        }
        else 
        {
            cc--;
            count=(count+vc%M)%M;
        }  
    }
    return count%M;
}
