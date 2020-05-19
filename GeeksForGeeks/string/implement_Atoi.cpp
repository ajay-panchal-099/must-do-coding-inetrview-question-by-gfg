bool alldigit(string s){
    int l = s.length();
     int k=0;
     if(s[0]=='-')
         k+=1;
    for ( int i = k; i < l; ++i) {
        if(s[i] < 48 || s[i]>57)
            return false;
    }
    return true;
}

/*You are required to complete this method */
int atoi(string str)
{
    //Your code here
    if(alldigit(str)){
          return stoi(str);
       } else
           return -1;
}
