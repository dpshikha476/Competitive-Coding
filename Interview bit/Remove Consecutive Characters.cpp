string Solution::solve(string a, int b) 
{
    int i,j,c=0;
    unordered_map<int,int> m;

    for(i=0;i<a.length()-1;)
    {
        c=0;
        for(j=i+1;j<a.length();j++)
        {
            if(a[i]!=a[j])
            break;
            else
            c++;
        }
        m[i]=c;
        i=j;
    }

    string r="";

    for(i=0;i<a.length();)
    {
        if(m.find(i)!=m.end())
        {
            if(m[i]==b-1)
            i=i+b;
            else
            {
                r+=a[i];
                i++;
            }
        }
        else
        {
            r+=a[i];
            i++;
        }
    }

    return r;
}