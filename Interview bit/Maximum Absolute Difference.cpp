int Solution::maxArr(vector<int> &a) 
{
    int mi1=INT_MAX,ma1=INT_MIN,mi2=INT_MAX,ma2=INT_MIN,i,m1,m2;

    for(i=0;i<a.size();i++)
    {
        mi1=min(mi1,a[i]+i);
        ma1=max(ma1,a[i]+i);

        mi2=min(mi2,a[i]-i);
        ma2=max(ma2,a[i]-i);

    }

    m1=ma1-mi1;
    m2=ma2-mi2;

    return max(m1,m2);

}