 
// source gfg visit geeksforgeeks for explanation


int max_el=INT_MIN;
    for( int mark=0;mark<10001;mark++){
          int sum=0;
        for( int i=0;i<n;i++){
            if(mark & (1<<i)) sum=sum^A[i];
        }
        max_el=max(max_el,sum);
    }
    return max_el;
}
