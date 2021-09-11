int Solution::coverPoints(vector<int> &a, vector<int> &b) 
{
    int i,c=0;

    for(i=0;i<a.size()-1;i++)
    {
        c+= max( abs(a[i]-a[i+1]) , abs(b[i]-b[i+1]) );
    }

    return c;

}