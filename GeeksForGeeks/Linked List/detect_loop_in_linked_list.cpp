int detectloop(Node *head) {

    // your code here
    
    struct Node* fast = head,*slow=head;
    
    while(fast!=NULL && fast->next != NULL){ 
     
        slow=slow->next;
        fast = fast->next->next;
        if(fast == slow)
          return 1;
        
    }
    return 0;
}
