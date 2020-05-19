// @author - ajay panchal
#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define ff first
#define ss second
#define eb emplace_back
#define vi vector<int>
#define pr pair<int,int>
#define endl "\n"
#define all(c) (c).begin(), (c).end()
const int MOD = 1e9 + 7 ;
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int dfs(int i, int j, int m, int n){
    if(i<0 || i>m-1 || j<0 || j>n-1)
        return 0;
    if(i==m-1 && j==n-1)
        return 1;
    return dfs(i,j+1,m,n)+dfs(i+1,j,m,n);
}
int32_t main(){
    IOS
    //freopen("addin.txt","r",stdin);
    //freopen("addout.txt","w",stdout);
     int t;cin>>t;
     while(t--){
         int m,n;cin>>m>>n;
       /*  vi a[m];
         for (int i = 0; i < m; ++i) {
             for (int j = 0; j < n; ++j) {
                 a[i].push_back(1);
             }
         }*/
         cout<<dfs(0,0,m,n)<<endl;
     }
    return 0;
}
// CHECK FOR CORNER CASES LIKE 0,1 etc.
// READ
// THINK
// CODE
// DEBUG
// AC
