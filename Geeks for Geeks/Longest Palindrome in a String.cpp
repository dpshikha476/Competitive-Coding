for(i=1;i<n;i++)
        {
            //even part 
            
            l=i-1;
            h=i;
            
            while(l>=0 && h<n && s[l]==s[h])
            {
                if(h-l+1>end)
                {
                    start=l;
                    end=h-l+1;
                }
                
                l--;
                h++;
            }
            
            //odd part
            
            l=i-1;
            h=i+1;
            
            while(l>=0 && h<n && s[l]==s[h])
            {
                if(h-l+1>end)
                {
                    start=l;
                    end=h-l+1;
                }
                
                l--;
                h++;
            }
        }

        return s.substr(start,end);
    }