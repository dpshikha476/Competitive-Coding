    vector<int> plusOne(vector<int>& digits) 
    {
      vector<ll> ans;
        ll flag = 0;
        for(ll i = digits.size()-1;i>=0;i--)
        {
            ll val = digits[i] + 1;
            if(val<=9)
            {
                digits[i] = val;
                return digits;
            }
            else
            {
                if(i==0 and val>9)
                {
                    flag = 1;
                }
                digits[i] = 0;
                
            }
        }
        
        if(flag==1)
        {
           digits.insert(digits.begin(),1);
            }
        return digits;   
    }