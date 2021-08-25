	vector<int> kLargest(int a[], int n, int k) 
	{
	    sort(a,a+n);
	    
	    vector<int> v;
	    
	    for(int i=n-1;i>=n-k;i--)
	    v.push_back(a[i]);
	    
	    return v;
	    
	}