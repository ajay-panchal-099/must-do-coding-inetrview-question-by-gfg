int strstr(string s, string x)
{
    //Your code here

    int j=0;
    for(int i=0; i< s.length()-x.length()+1;i++){
        if(s[i]==x[j]){
            int k = i;
            while(j<x.length() && s[k]==x[j]){
                k++;
                j++;
            }

        }
        if(j==x.length())
            return i;
        j=0;
    }
    return -1;
}
