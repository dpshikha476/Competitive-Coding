char* reverse(char *S, int len)
{
    stack<char> p;
    int i;
    
    for(i=0;i<len;i++)
    {
        p.push(S[i]);
    }
    
    i=0;
    while(!p.empty())
    {
        S[i]=p.top();
        i++;
        p.pop();
        
    }
    
    return S;
    
}