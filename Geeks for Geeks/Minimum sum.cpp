   string add(string n1,string n2)
    {
        int i,j,c=0,s=0,l1=n1.length(),l2=n2.length();
        string r="";
        
        reverse(n1.begin(),n1.end());
        reverse(n2.begin(),n2.end());
        
        for(i=0,j=0; i< min(l1,l2) && j<min(l1,l2); i++,j++)
        {
            s= n1[i]-'0' + n2[j]-'0' +c;
            
            if(s!=0)
            {
                c=s/10;
                s=s%10;
                
                r=r+to_string(s);
            }
        }
        
        for(;i<l1;i++)
        {
            s= n1[i]-'0' +c;
            if(s!=0)
            {
                c=s/10;
                s=s%10;
                
                r=r+to_string(s);
            }
        }
        
        for(;j<l2;j++)
        {
            s= n2[j]-'0' +c;
            if(s!=0)
            {
                c=s/10;
                s=s%10;
                
                r=r+to_string(s);
            }
        }
        
        if(c!=0)
        r+=to_string(c);
        
        reverse(r.begin(),r.end());
        return r;
        
    }


    string solve(int a[], int n) 
    {
        sort(a,a+n);
        int i;
        string n1="",n2="";
        
        for(i=0;i<n;i++)
        {
            if(i%2==0)
            n1+=to_string(a[i]);
            else
            n2+=to_string(a[i]);
        }
        
        return add(n1,n2);
        
    }