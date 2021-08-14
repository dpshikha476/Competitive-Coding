 string longestCommonPrefix(vector<string>& s) 
    {
        string r="";
        int i,mi=INT_MAX,j,flag=0;
        
        for(i=0;i<s.size();i++)
        {
            int l=s[i].length();
            mi=min(mi,l);
        }
        
        
        for(i=0;i<mi;i++)
        {
            string a=s[0];
            char ch=a[i];
            for(j=1;j<s.size();j++)
            {
                if(s[j][i]!=ch)
                {
                    flag=1;
                    break;
                }      
            }
            if(flag==0)
                r+=ch;
            else
                break;
        }
        
        return r;
        
    }