// using one queue
* The method push to push element into the stack */
void QueueStack :: push(int x)
{
        // Your Code
        q1.push(x);
}

/*The method pop which return the element poped out of the stack*/
int QueueStack :: pop()
{
        // Your Code 
        // using one queue implementation
         int ans=-1;
        if(q1.empty()){ 
            return ans;
        }
        q1.push(0);
        while(1){ 
           int y = q1.front();
            q1.pop();
            if(q1.front()==0){
                ans = y;
                break;
            }
            else q1.push(y);
        }
        q1.pop();
        return ans;
}


//  using two queue


void QueueStack :: push(int x)
{
        // Your Code
        q1.push(x);
}

/*The method pop which return the element poped out of the stack*/
int QueueStack :: pop()
{
        // Your Code  
         int ans=-1;
        if(q1.empty()){ 
            return ans;
        }
        q1.push(0);
        while(1){ 
           int y = q1.front();
            q1.pop();
            if(q1.front()==0){
                ans = y;
                break;
            }
            else q2.push(y);
        }
        q1.pop();
        swap(q1,q2);
        return ans;
}
