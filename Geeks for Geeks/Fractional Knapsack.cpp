    static bool cmp(struct Item a,struct Item b)
    {
        double r1=(double)a.value / (double)a.weight;
        double r2=(double)b.value / (double)b.weight;
        
        return r1>r2;
    }
    
    double fractionalKnapsack(int w,struct Item a[], int n)
    {
        sort(a,a+n,cmp);
        
        double tot=0.0;
        int cw=0;
        
        for(int i=0;i<n;i++)
        {
            if(cw+a[i].weight<=w)
            {
                cw+=a[i].weight;
                tot+=a[i].value;
            }
            else
            {
                int remaining=w-cw;
                tot+=a[i].value* ((double)remaining/(double)a[i].weight);
                break;
            }
        }
        
        return tot;
    }