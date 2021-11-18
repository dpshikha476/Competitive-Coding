    bool palindrome(vector<char> s)
    {
        int i,n=s.size();
        
        for(i=0;i<n/2;i++)
        {
            if(s[i]!=s[n-i-1])
                return false;
        }
        return true;
    }
    bool isPalindrome(string s) 
    {
        vector<char> r;
        int i,n=s.length();
        
        for(i=0;i<n;i++)
        {
            if(s[i]>='a' && s[i]<='z')
                r.push_back(s[i]);
            else if(s[i]>='A' && s[i]<='Z')
            {
                char x=(s[i]+32);
                 r.push_back(x);
            }
            else if(s[i]>='0' && s[i]<='9')
                 r.push_back(s[i]);
        }

        return palindrome(r);
    }