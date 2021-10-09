   int t[501][501];

    bool isPalindrome(string s, int i, int j)
    {
        if(i>=j)
        return true;
        
        while(i<j)
        {
            if(s[i]!=s[j])
            return false;
            
            i++;
            j--;
        }
        
        return true;
        
    }

    int partition(string s, int i, int j)
    {
        
        if(i>=j)
        return 0;
        
        if(isPalindrome(s,i,j)==true)
        return 0;
        
        if(t[i][j]!=-1)
        return t[i][j];
        
        int ans=INT_MAX;
        
        for(int k=i;k<=j-1;k++)
        {
            int temp=1,left,right;
            
            if(t[i][k]!=-1)
            left=t[i][k];
            else
            {
                left=partition(s,i,k);
                t[i][k]=left;
            }
            
            if(t[k+1][j]!=-1)
            right=t[k+1][j];
            else
            {
                right=partition(s,k+1,j);
                t[k+1][j]=right;
            }
            
            temp+=left+right;
            
            ans=min(ans,temp);
        }
        
        return t[i][j]=ans;
        
    }

    int palindromicPartition(string s)
    {
        memset(t,-1,sizeof(t));
        
        return partition(s,0,s.length()-1);
    }