bool isPalindrome(Node *head)
    {
        Node *h=head;
        int n=0,i,j;
        
        while(h)
        {
            n=n*10+h->data;
            h=h->next;
        }
        
        string s=to_string(n);
        
        for(i=0,j=s.length()-1 ;i<s.length()/2; i++,j--)
        {
            if(s[i]!=s[j])
            return 0;
        }
        
        return 1;
        
    }