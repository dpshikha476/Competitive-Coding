string Solution::longestCommonPrefix(vector<string> &a) 
{
    int i,j,n=a.size(),flag=0;
    string ans="";
    
    for(i=0;i<a[0].length();i++)
    {
        string r=a[0];
        char c=r[i];
        for(j=1;j<n;j++)
        {
            string s=a[j];
            if(s[i]!=c)
            {
                flag=1;
                break;
            }
        }

        if(flag==1)
        break;
        else
        ans=ans+c;
    }

    return ans;
}
