#include <iostream>
using namespace std;

int main() {
    //code

    int t;
    cin>>t;
    while(t--){
        int n, sum;
        cin>>n>>sum;

        if(sum<=9 && n==1)
            cout<<sum<<endl;

        else if( sum > 9*n || sum <=0 )
            cout<<-1<<endl;

        else{
            while(n-- && sum >= 9){
                cout<<9;sum-=9;
            }
            if(sum<9)
                cout<<sum;

            while(n>0){
                cout<<0; n--;
            }
            cout<<endl;
        }

    }
    return 0;
}
