int mySqrt(int x) 
    {
        int left = 0;
        int right = x;
        while(left < right){
            int mid = (left)/2 + right/2 + 
                ( ((left&1)==1 and (right&1)==1) or (left&1)!=(right&1) );
            
            if(mid <= x/mid){
                left = mid;
            }else{
                right = mid-1;
            }
        }
        return left;
    }