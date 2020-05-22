Node* pairWiseSwap(struct Node* head) {
    // The task is to complete this method
    
    Node* temp = head;
    while(temp&&temp->next){ 
          swap(temp->data,temp->next->data);
          temp=temp->next->next;
    }
    
    return head;
}
