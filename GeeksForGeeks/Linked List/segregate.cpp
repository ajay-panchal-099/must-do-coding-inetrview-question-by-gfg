Node* segregate(Node *head) {
    
    // Add code here
    
    int count[3]={0};
    Node *ptr = head;
    
    while(ptr!=NULL){ 
        count[ptr->data]++;
        ptr=ptr->next;
    }
    
    ptr = head;
    int i=0;
    while(ptr!=NULL){ 
      if(count[i]==0)
        i++;
      else{ 
        ptr->data =i;
        count[ptr->data]--;
          ptr=ptr->next;
      }
    }
    return head;
}
