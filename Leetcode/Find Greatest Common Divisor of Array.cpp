int gcd(int a, int b)
    {
        if(a==0)
            return b;
        
        return gcd(b%a,a);
    }
    
    int findGCD(vector<int>& a) 
    {
        sort(a.begin(),a.end());
        
        int x=a[0],y=a[a.size()-1];
        cout<<x<<" "<<y;
        return gcd(x,y);
    }