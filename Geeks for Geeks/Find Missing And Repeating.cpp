int* findTwoElement(int *a, int n) 
    {
        
        int i,x,y;
        int* ans=new int[2];
        
        for(i=0;i<n;i++)
        {
            if(a[abs(a[i])-1]<0)
            {
                ans[0]=abs(a[i]);
            }
            else
            a[abs(a[i])-1]=-a[abs(a[i])-1];
        }
        
        for(i=0;i<n;i++)
        {
            if(a[i]>0)
            {
                ans[1]=i+1;
                break;
            }
        }
        
        return ans;
    }