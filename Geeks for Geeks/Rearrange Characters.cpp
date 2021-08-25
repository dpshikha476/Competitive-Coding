int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int b[26]={0},m=0,i;
    
        for(i=0;i<s.length();i++)
        {
            b[s[i]-'a']++;
        }
        
        for(i=0;i<26;i++)
        m=max(m,b[i]);
        
        if(m>=s.length()-m+1)
        cout<<0<<"\n";
        else
        cout<<1<<"\n";
        
    }
    
    
	return 0;
}