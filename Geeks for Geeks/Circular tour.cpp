    int tour(petrolPump p[],int n)
    {
       int i,c=0,j,start;
       
       for(i=0;i<n;i++)
           if(p[i].petrol>=p[i].distance)
           {
               start=i;
               break;
           }
           
        for(i=start;i<n;)
        {
            c+=p[i].petrol-p[i].distance;
            if(c<0)
            {
                i++;
                for(;i<n;i++)
                {
                    if(p[i].petrol>=p[i].distance)
                    {
                       start=i;
                       c=0;
                       break;
                    }
                }
            }
            
            else
            i++;
            
        }
        
        if(c<0)
        return -1;
        
        for(i=0;i<start;i++)
        {
            c+=p[i].petrol-p[i].distance;
            if(c<0)
            return -1;
        }
        
        
        return start;
    }