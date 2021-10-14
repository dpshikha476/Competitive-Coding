vector<int> Solution::searchRange(const vector<int> &a, int b) 
{
    int l=0,r=a.size()-1,m,x=-1,y=-1;

    if(a[0]==b && a[r]==b)
    return {0,r};

    if(r==0)
    {
        if(a[0]==b)
        return {0,0};
        else 
        return {-1,-1};
    }

    while(l<=r)
    {
        m=(r-l)/2+l;

        if(a[m]==b)
        {
            r=m-1;
            x=m;
        }
        else if(a[m]<b)
        l=m+1;
        else if(a[m]>b)
        r=m-1;
    }

    l=0; r=a.size()-1;

    while(l<=r)
    {
        m=(r-l)/2+l;

        if(a[m]==b)
        {
            l=m+1;
            y=m;
        }
        else if(a[m]<b)
        l=m+1;
        else if(a[m]>b)
        r=m-1;
    }

    return {x,y};
}
