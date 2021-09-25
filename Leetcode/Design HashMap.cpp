    vector<pair<int,int>> v;
    
    MyHashMap() 
    {
        
    }
    
    /** value will always be non-negative. */
    void put(int key, int value) 
    {
        remove(key);
        v.push_back({key,value});
    }
    
    /** Returns the value to which the specified key is mapped, or -1 if this map contains no mapping for the key */
    int get(int key) 
    {
         for(auto i:v)
         {
             if(i.first==key)
                 return i.second;
         }
        
        return -1;
    }
    
    /** Removes the mapping of the specified value key if this map contains a mapping for the key */
    void remove(int key) 
    {
        if(get(key)!=-1)
        {
            for(auto it=v.begin();it!=v.end();it++)
            {
                if(it->first==key)
                {
                    v.erase(it);
                    return;
                }
            }
        }
    }