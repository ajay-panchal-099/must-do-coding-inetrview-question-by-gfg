bool isPalindrome(Node *head)
{
    //Your code here
    
    Node* temp = head,*p=head;
    stack<int>s;
    
    while(temp!= NULL ){ 
       s.push(temp->data);
        temp= temp->next;
    } 
    p = head;
    while(p != NULL){ 
      if(p->data != s.top())
      return 0;
      s.pop();
      p=p->next;
    } 
     return 1;
}
