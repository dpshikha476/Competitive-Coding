void matchPairs(char nu[], char b[], int n) 
	{
	    unordered_map<char,int> m;
	    char a[9]={'!','#','$','%','&','*','@','^','~'};
	    int i,j=0;
	    
	    for(i=0;i<n;i++)
	    m[nu[i]]=1;
	    
	    for(i=0;i<n;i++)
	    m[b[i]]=2;
	    
	    for(i=0;i<9;i++)
	    {
	        if(m.find(a[i])!=m.end() && m[a[i]]==2)
	        {
	            nu[j]=a[i];
	            b[j]=a[i];
	            j++;
	        }
	    }
	    
	}
