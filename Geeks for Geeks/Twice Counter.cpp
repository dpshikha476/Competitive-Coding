  int countWords(string list[], int n)
        {
            unordered_map<string,int> m;
            int i,c=0;
            
            for(i=0;i<n;i++)
            m[list[i]]++;
            
            for(auto it=m.begin();it!=m.end();it++)
            {
                if(it->second==2)
                c++;
            }
            
            return c;
            
        }