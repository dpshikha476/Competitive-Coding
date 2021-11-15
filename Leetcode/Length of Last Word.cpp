int lengthOfLastWord(string s) 
    {
        int spaces = 0, i = s.length()-1;
        while(i >= 0 && s[i] == ' ')
            spaces++, i--;
        
        int count = 0;
        for(int idx = 0; idx < s.length()-spaces; idx++){
            if(s[idx] != ' ')
                count++;
            else
                count = 0;
        }
        return count;   
    }