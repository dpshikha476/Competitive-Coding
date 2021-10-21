 ListNode *globalHead;
    
    bool validate(ListNode *head) 
    {
        if (head == nullptr) 
            return true;
        bool validationResult = false;

        bool validationValue = validate(head->next);
        if (globalHead->val == head->val) 
            validationResult = true;

        globalHead = globalHead->next;
        return validationValue && validationResult;
    }

    bool isPalindrome(ListNode *head) 
    {
        globalHead = head;
        return validate(head);
    }