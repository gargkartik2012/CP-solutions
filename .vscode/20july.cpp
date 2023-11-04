#include<bits/stdc++.h>
using namespace std;
#define int long long
/*#define pb push_back
#define loop(n) for(long long i=0;i<n;i++)
#define rloop(n) for(long long i=n;i>=0;i--)*/


void solve(){
    int n;
    cin >> n;
    int sum =0;
    while(n){
        sum =sum+n;
        n /=2;
    }
    cout<<sum<<endl;

}

signed main(){
    
    int tc = 1;
    cin>>tc; 
    while(tc--){
        solve();
        
}
    return 0;
}