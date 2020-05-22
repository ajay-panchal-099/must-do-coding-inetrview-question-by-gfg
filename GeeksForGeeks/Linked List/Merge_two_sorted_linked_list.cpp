Node* sortedMerge(Node* head1,   Node* head2)
{
    // Your Code Here
    if(!head1)
      return head2;
    if(!head2)
       return head1;
       
    if(head1->data < head2->data){ 
        head1->next = sortedMerge(head1->next,head2);
        return head1;
    }
    else{ 
         head2->next = sortedMerge(head1,head2->next);
        return head2;
    } 
}
///

//
// Your Code Here
		    Node *result,*dummy;
			dummy=(Node*)malloc(sizeof(Node*));
			result=dummy;
	//Head Null checker
		if(head1==NULL)
			{
				return head2;
			}
		if(head2==NULL)
			{
				return head1;
			}
//now compare if both are not NULL
    while(head1!=NULL && head2!=NULL)
 		{
			if(head1->data <= head2->data)
				{
					result->next=head1;
					head1=head1->next;
				}
			else
				{
					result->next=head2;
					head2=head2->next;
				}
					result=result->next;
		}
//if anyone got NULL first then
		if(head1!=NULL)
			{
			result->next=head1;
			}
		if(head2!=NULL)
			{
			result->next=head2;
			}
		return dummy->next;
