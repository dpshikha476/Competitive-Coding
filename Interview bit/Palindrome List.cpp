int Solution::lPalin(ListNode* A) 
{
   ListNode *slow = A, *fast = A;
    //finding mid
    while(fast != NULL && fast->next != NULL){
        fast = fast->next->next;
        slow = slow->next;
    }
    
    ListNode *next;
    ListNode *prev = 0;
    ListNode *current = slow;
    
    while(current != NULL){
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    
    while(prev != NULL && A != NULL){
        if(prev->val != A->val) return 0;
        else {
            prev = prev->next;
            A = A->next;
        }
    }
    return 1;
}