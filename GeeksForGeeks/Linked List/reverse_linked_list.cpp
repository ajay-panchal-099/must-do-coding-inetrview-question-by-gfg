Node* reverseList(Node *head)
{
  // Your code here
  if(head->next==NULL){
      return head;
     }
    Node *revhead=reverseList(head->next);
     head->next->next=head;
     head->next=NULL;
     return revhead;
}

