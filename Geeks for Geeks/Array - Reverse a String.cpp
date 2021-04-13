string reverseWord(string str)
{
    long long int i,j,l;
    l=str.length();
    for(i=0,j=l-1;i<l/2;i++,j--)
    {
        swap(str[i],str[j]);
    }
    return str;

}