string FirstNonRepeating(string s)
		{
		    int i,b[26]={0};
		    queue<char> q;
		    string r="";
		    
		    for(i=0;i<s.length();i++)
		    {
		        q.push(s[i]);
		        b[s[i]-'a']++;
		        
		        while(!q.empty())
		        {
		            if(b[q.front()-'a']>1)
		            {
		                q.pop();
		            }
		            else
		            {
		                r+=q.front();
		                break;
		            }
		        }
		        if(q.empty())
		        r+="#";
		    }
		    
		    return r;
		}