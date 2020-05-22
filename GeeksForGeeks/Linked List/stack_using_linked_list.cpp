/* The method push to push element
   into the stack */
void MyStack ::push(int x) {
    // Your Code
    
    StackNode* newNode = new StackNode(x);
    if(top==NULL)
       top = newNode;
    else{ 
        newNode->next = top;
        top = newNode;
    }
}

/* The method pop which return the element
  poped out of the stack*/
int MyStack ::pop() {
    // Your Code
    
    if(top==NULL)
      return -1;
    else{ 
         StackNode * p = top;
          int x = p->data;
          top=p->next;
          delete(p);
         return x;
        
    }
}
