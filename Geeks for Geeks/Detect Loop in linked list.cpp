bool detectLoop(Node* head)
    {
        Node* one=head;
        Node* two=head;
      
        
        while(one && two && two->next)
        {
            one=one->next;
            two=two->next->next;
            if(one==two)
            return true;
        }
        
        return false;
    }