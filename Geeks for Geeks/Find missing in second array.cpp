	vector<long long> findMissing(long long a[], long long b[],  
                 int n, int m) 
	{ 
	   vector<long long> v;
	   unordered_map<long,long> x;
	   int i;
	   
	   for(i=0;i<m;i++)
	   {
	       x[b[i]]++;
	   }
	   
	   for(i=0;i<n;i++)
	   {
	       if(x.find(a[i])==x.end())
	       v.push_back(a[i]);
	   }
	   
	   return v;
	   
	} 