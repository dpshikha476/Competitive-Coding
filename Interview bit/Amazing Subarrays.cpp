bool isvowel(char ch)
{
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u' ||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
    return true;

    return false;
}

int Solution::solve(string a) 
{
    int m=10003;
    int i,l=a.length(),c=0;

    for(i=0;i<l;i++)
    {
        if(isvowel(a[i]))
        c=(c+(l-i)%m)%m;
    }

    return c%m;
}
