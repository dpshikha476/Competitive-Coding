bool isg(string a)
{
    if(a.length()==1)
    return true;

    for(int i=0;i<a.length()-1;i++)
    {
        if(a[i]<a[i+1])
        return false;
        
    }

    return true;
}

string Solution::solve(string A) 
{
    int i;

    if(isg(A))
    return "-1";
    
    for(int i=A.size()-1; i>0; i--)
    {
        if(A[i-1]<A[i])
        {
            int index = i-1;
            reverse(A.begin()+index+1, A.end());
            for(int j = index+1; j<A.size(); j++)
            {
                if(A[j]>A[index])
                {
                    swap(A[index],A[j]);
                    return A;
                }
            }
        }
    }
    
    return "-1";       
}
