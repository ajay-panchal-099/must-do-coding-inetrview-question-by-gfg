//m1: 
int minop(int n){
    if(n<0)
        return INT_MAX;
    if(n==0)
        return 0;
    int x = INT_MAX;
    if(n%2==0)
        x = minop(n/2);
    int y = minop(n-1);
    return 1+min(x,y);
}

// m2:

while (t--){
       int n;
       cin>>n;
       int count=0;
       while (n>0){
           if(n%2==0)
               n/=2;
           else n-=1;
           count++;
       }
       cout<<count<<endl;
   }
