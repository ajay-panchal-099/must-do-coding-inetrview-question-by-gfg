Node* rotate(Node* head, int k) {
    // Your code here
    struct Node* p=head,*q=head;
    
    int i =1;
    while(i<k){ 
      p=p->next; 
      i++;
    }
    while(q->next != NULL)
       q= q->next;
    
    q->next = head;
    head = p->next;
    p->next =NULL;
    return head;
}
