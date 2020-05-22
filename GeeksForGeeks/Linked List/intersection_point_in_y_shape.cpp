int intersectPoint(Node* head1, Node* head2)
{
    // Your Code Here
    
    int l1=0,l2=0;
    struct Node *p= head1, *q = head2;
    while(p!= NULL){ 
        l1++;
        p = p->next;
    }
    while(q!= NULL){ 
         l2++;
        q= q->next;
    }
    int diff = abs(l1-l2);
    
     p = head1;
     q = head2;
     
    if(l1>l2){ 
         while(diff){ 
           p = p->next;
             diff--;
         }
    }
    else{ 
          while(diff){ 
              q = q->next;
              diff--;
          }
    }
    
    while(p != NULL && q!= NULL ){ 
      if(p == q)
        return p->data;
      p = p->next;
      q = q->next;
    }
   
      return -1;
    
}
