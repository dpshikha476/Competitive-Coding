int findLongestConseqSubseq(int a[], int n)
    {
        int i,c=0,s,m=0,flag=0;
        sort(a,a+n);
        s=a[0];
        for(i=1;i<n;i++)
        {
            if(a[i]==s+1)
            {
                flag=1;
                c++;
                s++;
            }
            else if(a[i]==s)
            {
                flag=1;
            }
            else
            {
                c=0;
                s=a[i];
            }
            
            m=max(m,c);
        }
        
        if(flag==1)
        return m+1;
        else
        return 1;
    }