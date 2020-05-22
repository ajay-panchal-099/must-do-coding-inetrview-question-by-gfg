void removeTheLoop(Node *head)
{
     //Your code here
   Node *sp=head,*fp=head;
   while(sp && fp && fp->next)
    {
     sp=sp->next;
     fp=fp->next->next;
     if(sp==fp)
        break;
    }

    if(sp==fp)
    {
     sp=head;
     while(sp->next!=fp->next)
      {
      sp=sp->next;
      fp=fp->next;
       }
     fp->next=NULL;
   }
    
    
}
