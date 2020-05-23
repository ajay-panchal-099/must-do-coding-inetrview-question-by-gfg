/*returns min element from stack*/
int _stack :: getMin()
{
   //Your code here
   if(!s.empty())
   return minEle;
   else return -1;
}

/*returns poped element from stack*/
int _stack ::pop()
{
   //Your code here
   int ans = -1;
   if(s.empty())
     return ans;
    else{ 
         if(s.top()==minEle){
             ans = s.top();
             s.pop();
             if(!s.empty()){ 
            minEle = s.top();
             stack<int>ss;
             while(!s.empty()){ 
                 minEle = min(minEle,s.top());
                 ss.push(s.top());
                 s.pop();
             }
             while(!ss.empty()){ 
                 s.push(ss.top());
                 ss.pop();
             }
                 
             } 
            
         }
         else{ 
              ans = s.top();
              s.pop();
         }
        
    }
    return ans;
}

/*push element x into the stack*/
void _stack::push(int x)
{
   //Your code here
   if(s.empty()){ 
       s.push(x);
       minEle = x;
   }
   else{ 
        minEle = min(minEle,x);
        s.push(x);
   }
}
