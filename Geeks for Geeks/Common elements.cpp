      vector <int> commonElements (int a[], int b[], int c[], int n1, int n2, int n3)
        {
            
             int i = 0, j = 0, k = 0,p1=INT_MIN, p2=INT_MIN, p3=INT_MIN;
             vector<int> v;

            while (i < n1 && j < n2 && k < n3)
            {
                while(a[i]==p1 && i<n1)
                i++;
                while(b[j]==p2 && j<n2)
                j++;
                while(c[k]==p3 && k<n3)
                k++;
                
                 if (a[i] == b[j] && b[j] == c[k])
                 {   
                     v.push_back(a[i]);  
                     p1=a[i];
                     p2=b[j];
                     p3=c[k];
                     i++;
                     j++;
                     k++; 
                     
                 }
         
                 else if (a[i] < b[j])
                 {
                     p1=a[i];
                     i++;
                 }
         
                 else if (b[j] < c[k])
                 {
                     p2=b[j];
                     j++;
                 }
         
                 else
                 {
                     p3=c[k];
                     k++;
                 }
                     
                
            }
            
            return v;
            
        }