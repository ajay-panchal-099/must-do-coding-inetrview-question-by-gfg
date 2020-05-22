int getNthFromLast(Node *head, int n)
{
       // Your code here
       struct Node* slow = head,*fast= head;
       int i=0;
       
       while(i<n){ 
           if(fast==NULL)
             return -1;
             i++;     
            fast = fast->next;
       }
       
       while(fast!= NULL){ 
         slow=slow->next;
         fast = fast->next;
       }
       
     return slow->data;  
}

