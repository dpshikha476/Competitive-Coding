    string chooseandswap(string s)
    {
        int x=-1,y=-1,n=s.length(),arr[26];
        bool flag=false;
        memset(arr,-1,sizeof(arr));
        
        for(int i=0;i<n;i++)
        {
            if(arr[s[i]-'a']==-1)
                arr[s[i]-'a']=i;
        }
        
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(arr[s[i]-'a']==i && arr[s[j]-'a']==j)
                {
                    if(s[i]-'a'>s[j]-'a')
                    {
                        x=s[i]-'a';
                        if(y!=-1 && s[j]-'a'<y)
                        y=s[j]-'a';
                        else if(y==-1)
                        y=s[j]-'a';
                        flag=true;
                    }
                }
            }
            
            if(flag==true)
            break;
        }
        
        if(x==-1 || y==-1)
        return s;
        
        char a=char('a'+x),b=char('a'+y);
        
        for(int i=0;i<n;i++)
        {
            if(s[i]==a)
            s[i]=b;
            else if(s[i]==b)
            s[i]=a;
        }
        
        return s;
    }
    