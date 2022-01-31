    int ladderLength(string beginWord, string endWord, vector<string>& wordList) 
    {
        unordered_set<string> w;
        queue<string> q;
        
        for(int i=0;i<wordList.size();i++)
        {
            w.insert(wordList[i]);
        }
        
        q.push(beginWord);
        
        if(w.find(endWord)==w.end())
            return 0;
        
        int l=0,len=endWord.length();
        
        while(!q.empty())
        {
            l++;
            int n=q.size();
            for(int i=0;i<n;i++)
            {
                string s=q.front();
                q.pop();
                
                for(int j=0;j<len;j++)
                {
                    char o=s[j];
                    
                    for(char k='a'; k<='z';k++)
                    {
                        s[j]=k;
                        
                        if(s==endWord)
                            return l+1;
                        
                        if(w.find(s)==w.end())
                            continue;
                        
                        w.erase(s);
                        q.push(s);
                    }
                    
                    s[j]=o;
                }
            }
        }
        
        return 0;
        
    }